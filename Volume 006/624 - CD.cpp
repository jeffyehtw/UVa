#include<iostream>
#include<algorithm>
#include<queue>
#include<fstream>

#define MAX 20005 

using namespace std;

int dp[25][MAX];
queue<int> bag[25][MAX];

int main()
{
	int n, t;
	while (cin >> n >> t)
	{
		//input
		int v[MAX];
		for (int i = 1; i < t + 1; i++)
			cin >> v[i];

		//initialize
		dp[25][MAX] = { 0 };

		for (int i = 1; i < t + 1; i++)
		for (int j = 1; j < n + 1; j++)
		{
			//max
			int m;
			if (v[i] > j)
			{
				m = dp[i - 1][j];
				bag[i][j] = bag[i - 1][j];
			}
			else if (v[i] + dp[i - 1][j - v[i]] > dp[i - 1][j])
			{
				m = v[i] + dp[i - 1][j - v[i]];
				bag[i][j] = bag[i - 1][j - v[i]];
				bag[i][j].push(v[i]);
			}
			else
			{
				m = dp[i - 1][j];
				bag[i][j] = bag[i - 1][j];
			}
			dp[i][j] = m;
		}
		
		if(dp[t][n] == 0 || bag[t][n].empty())
			cout << "0 sum:0\n";
		else
		{
			//output
			cout << bag[t][n].front();
			bag[t][n].pop();
			while (!bag[t][n].empty())
			{
				cout << " " << bag[t][n].front();
				bag[t][n].pop();
			}
			cout << " sum:" << dp[t][n] << endl;
		}
	}
	return 0;
}