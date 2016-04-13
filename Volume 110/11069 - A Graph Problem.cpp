#include<iostream>

using namespace std;

int main()
{
	long long dp[100];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 2;
	for (int i = 4; i < 100; i++)
	{
		dp[i] = 0;
		dp[i] += dp[i - 2];
		dp[i] += dp[i - 3];
	}

	int n;
	while (cin >> n)
	cout << dp[n] << endl;
	return 0;
}