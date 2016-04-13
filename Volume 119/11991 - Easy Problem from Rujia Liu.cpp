#include<iostream>
#include<vector>

using namespace std;

vector<int> number[1000001];

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		for (int i = 0; i < m; i++)
		{
			int temp; cin >> temp;
			number[temp].push_back(i + 1);
		}

		while (n--)
		{
			int k, v; 
			cin >> k >> v;

			if (number[v].size() < k)
				cout << "0" << endl;
			else
				cout << number[v][k - 1] << endl;
		}
		
		for (int i = 0; i < 1000001; i++)
			number[i].clear();
	}
	return 0;
}