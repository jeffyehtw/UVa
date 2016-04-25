#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int dp[1001][1001];

int main()
{
	int round = 1;
	string s1, s2;
	while (getline(cin, s1))
	{
		if (s1 == "#")
			break;
		getline(cin, s2);

		int n = s1.length();
		int m = s2.length();

		//initialize dp
		for (int i = 0; i <= n; i++)
			dp[i][0] = 0;
		for (int i = 0; i <= m; i++)
			dp[0][i] = 0;

		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		if (s1[i - 1] == s2[j - 1])
			dp[i][j] = dp[i - 1][j - 1] + 1;
		else
			dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

		printf("Case #%d: you can visit at", round++);
		printf(" most %d cities.\n", dp[n][m]);
	}
	return 0;
}