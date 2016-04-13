#include<iostream>

using namespace std;

int main()
{
	int dp[11] = { 0 };
	dp[0] = dp[1] = 1;
	for (int i = 2; i < 11; i++)
	for (int j = 0; j < i; j++)
		dp[i] += dp[j] * dp[i - j - 1];

	int n;
	bool first = true;
	while (cin >> n)
	{
		if (!first)
			cout << endl;
		cout << dp[n] << endl;
		first = false;
	}
	return 0;
}