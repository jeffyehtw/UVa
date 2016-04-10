#include<iostream>

using namespace std;

int main()
{
	long long coin[11] = {
		5, 10, 20, 50, 100, 
		200, 500, 1000,
		2000, 5000, 10000
	};

	long long dp[30005] = { 1 };
	for (int i = 0; i < 11; i++)
	for (int j = coin[i]; j < 30005; j++)
		dp[j] += dp[j - coin[i]];
	
	int n, m;
	while (cin >> n)
	{
		cin.get();
		cin >> m;

		if (!n && !m)
			break;

		printf("%3d.%02d", n, m);
		printf("%17lld\n", dp[n * 100 + m]);
	}
	return 0; 
}