#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][1001];

int main()
{
	int n, m;
	int round = 1;
	while (cin >> n >> m)
	{
		if (!n && !m)
			break;

		//input
		int x[101];
		int y[101];
		for (int i = 0; i < n; i++)
			cin >> x[i];
		for (int i = 0; i < m; i++)
			cin >> y[i];

		//initialize dp
		for (int i = 0; i <= n; i++)
			dp[i][0] = 0;
		for (int i = 0; i <= m; i++)
			dp[0][i] = 0;

		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		if (x[i - 1] == y[j - 1])
			dp[i][j] = dp[i - 1][j - 1] + 1;
		else
			dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

		if (round > 1)
			cout << endl;
		printf("Twin Towers #%d\n", round++);
		printf("Number of Tiles : %d\n", dp[n][m]);
	}
	return 0;
}