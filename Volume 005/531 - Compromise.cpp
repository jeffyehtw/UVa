#include<iostream>
#include<string>
#include<vector>

#define MAX 3001

using namespace std;

int dp[MAX][MAX];
int table[MAX][MAX];

int main()
{
	string temp;
	while (cin >> temp)
	{
		//input
		vector<string> s1;
		while (temp != "#")
		{
			s1.push_back(temp);
			cin >> temp;
		}
		cin >> temp;
		vector<string> s2;
		while (temp != "#")
		{
			s2.push_back(temp);
			cin >> temp;
		}

		int n = s1.size();
		int m = s2.size();

		//initialize dp
		for (int i = 0; i <= n; i++)
			dp[i][0] = 0;
		for (int i = 0; i <= m; i++)
			dp[0][i] = 0;

		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		if (s1[i - 1] == s2[j - 1])
		{
			dp[i][j] = dp[i - 1][j - 1] + 1;
			table[i][j] = 2;
		}
		else if (dp[i][j - 1] > dp[i - 1][j])
		{
			dp[i][j] = dp[i][j - 1];
			table[i][j] = 1;
		}
		else
		{
			dp[i][j] = dp[i - 1][j];
			table[i][j] = 3;
		}

		//trace back
		int x = n;
		int y = m;
		int max = dp[n][m];
		vector<string> out;
		for (int i = 0; i < max;)
		{
			if (table[x][y] == 2)
			{
				out.push_back(s1[x - 1]);
				x--, y--;
				i++;
			}
			else if (table[x][y] == 1)
				y--;
			else
				x--;
		}

		//output
		for (int i = 0; i < out.size(); i++)
		{
			if (i > 0)
				cout << " ";
			cout << out[out.size() - 1 - i];
		}
		cout << endl;
	}
	return 0;
}