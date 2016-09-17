#include<iostream>

using namespace std;

int main()
{
	long long dp[50];
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 5;
	for (int i = 3; i < 50; i++)
	{
		dp[i] = 0;
		dp[i] += dp[i - 1];
		dp[i] += dp[i - 2] * 4;
		dp[i] += dp[i - 3] * 2;
	}

	int n;
	while (cin >> n)
	while (n--)
	{
		int m; cin >> m;
		cout << dp[m] << endl;
	}
	return 0;
}