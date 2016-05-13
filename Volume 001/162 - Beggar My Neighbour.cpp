#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<fstream>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("input.txt", ios::in);

	ofstream outfile;
	outfile.open("output.txt", ios::out);

	//variables
	bool turn;
	map<char, int> spec;
	spec['J'] = 1;
	spec['Q'] = 2;
	spec['K'] = 3;
	spec['A'] = 4;

	//0 for master
	//1 for rookie
	deque<string> player[2];

	int count[2] = { 0 };

	//input
	string s;
	turn = 1;
	while (getline(infile, s))
	{
		if (s == "#") break;

		stringstream ss(s);
		while (ss >> s)
		{
			player[turn].push_back(s);
			turn = !turn;
		}
	}
	
	//simulate
	stack<string> on;
	on.push(player[1].back());
	player[1].pop_back();
	count[1]++;
	outfile << "P" << 1 << " PUSH " << on.top() << " " << on.size() << endl;
	
	turn = 0;
	while (true)
	{
		int n = spec[on.top()[1]];
		if (n == 0)
		{
			on.push(player[turn].back());

			outfile << "P" << turn << " PUSH " << player[turn].back() << " " << on.size() << endl;

			player[turn].pop_back();
			count[turn]++;

			//TEMPTEMP
			deque<string> temp = player[turn];
			while (!temp.empty())
			{
				outfile << temp.front() << " ";
				temp.pop_front();
			}
			outfile << endl;
			stack<string> ts = on;
			while (!ts.empty())
			{
				outfile << ts.top() << " ";
				ts.pop();
			}
			outfile << endl;

			if (player[turn].size() == 0) break;
		}
		else
		{
			bool ok = false;
			for (int i = 0; i < n; i++)
			{
				if (player[turn].empty())
					break;

				string cur = player[turn].back();

				outfile << "P" << turn << " PUSH " << cur << " " << on.size()  + 1 << endl;
				on.push(cur);
				player[turn].pop_back();

				count[turn]++;

				//TEMPTEMP
				deque<string> temp = player[turn];
				while (!temp.empty())
				{
					outfile << temp.front() << " ";
					temp.pop_front();
				}
				outfile << endl;
				stack<string> ts = on;
				while (!ts.empty())
				{
					outfile << ts.top() << " ";
					ts.pop();
				}
				outfile << endl;

				if (spec[on.top()[1]])
				{
					ok = true;
					break;
				}	
			}

			if (player[turn].size() == 0) break;

			if (!ok)
			{
				while (!on.empty())
				{
					outfile << "P" << turn << " LOSE\n";
					player[turn].push_front(on.top());
					on.pop();
				}

				outfile << "P" << turn << " PUSH " << player[turn].back() << endl;

				on.push(player[turn].back());	
				player[turn].pop_back();

				count[turn]++;
			}
			outfile << "P0 " << player[0].size() << endl;
			outfile << "P1 " << player[1].size() << endl;
			outfile << "ON " << on.size() << endl;
		}
		turn = !turn;
	}
	outfile << count[0] << " " << count[1] << endl;
	outfile << on.size() << endl;

	outfile << (int)turn << " ";
	outfile << player[!turn].size();

	//system("pause");
	return 0;
}