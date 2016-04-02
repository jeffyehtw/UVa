#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class excuse
{
	public:
		string s;
		vector<string> lower;
		int match;

		excuse():match(0) {}

		void process()
		{
			string temp = s;
			for (int i = 0; i < temp.length(); i++)
			{
				if (temp[i] >= 'A' && temp[i] <= 'Z')
				{
					temp[i] += 32;
				}
				else if (!(temp[i] >= 'a' && temp[i] <= 'z'))
				{
					temp[i] = ' ';
				}
			}

			while (true)
			{
				int end = temp.find(' ');

				//last one
				if (end == temp.npos)
				{
					lower.push_back(temp);
					break;
				}

				string sub = temp.substr(0, end);
				temp = temp.substr(end + 1);

				lower.push_back(sub);
			}
		}

		void find(string var)
		{
			for (int i = 0; i < lower.size(); i++)
			{
				if (lower[i] == var)
					match++;
			}
		}
};

int main()
{
	int sets = 1;

	int n, k;
	while (cin >> n >> k)
	{
		vector<string> keyword;
		while (n--)
		{
			string temp; cin >> temp;
			keyword.push_back(temp);
		}
		cin.get();

		vector<excuse> ex;
		while (k--)
		{
			//initilize
			ex.push_back(excuse());
			
			getline(cin, ex[ex.size() - 1].s);

			ex[ex.size() - 1].process();	
		}

		int max = 0;

		//search keyword
		for (int i = 0; i < ex.size(); i++)
		{
			for (int j = 0; j < keyword.size(); j++)
			{
				ex[i].find(keyword[j]);

				//find max match
				if (ex[i].match > max)
					max = ex[i].match;
			}
		}

		//output
		cout << "Excuse Set #" << sets << endl;
		for (int i = 0; i < ex.size(); i++)
		{			
			if (ex[i].match == max)
			{
				cout << ex[i].s << endl;
			}		
		}
		cout << endl;
		sets++;
	}
	return 0;
}