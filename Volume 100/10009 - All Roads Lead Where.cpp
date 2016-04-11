#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main()
{
	int n;
	bool first = true;

	while (cin >> n)
	while (n--)
	{
		int m, q;
		cin >> m >> q;

		//input
		map<char, char> root;
		while (m--)
		{
			string c1, c2;
			cin >> c1 >> c2;
			root[c2[0]] = c1[0];
		}

		if (!first)
			cout << endl;
		first = false;

		//query
		for (int i = 0; i < q; i++)
		{
			string c1, c2;
			cin >> c1 >> c2;

			//route 1
			vector<char> r1;
			r1.push_back(c1[0]);
			while (r1[r1.size() - 1] != 'R')
			r1.push_back(root[r1[r1.size() - 1]]);

			//route 2
			vector<char> r2;
			r2.push_back(c2[0]);
			while (r2[r2.size() - 1] != 'R')
			r2.push_back(root[r2[r2.size() - 1]]);

			int p1 = r1.size() - 1;
			int p2 = r2.size() - 1;

			//erase common
			while (p1 >= 0 && p2 >= 0 
				&& r1[p1] == r2[p2])
				p1--, p2--;
			
			//output
			for (int i = 0; i <= p1 + 1; i++)
				cout << r1[i];
			for (int i = p2; i > -1; i--)
				cout << r2[i];
			cout << endl;
		}
	}
	return 0;
}