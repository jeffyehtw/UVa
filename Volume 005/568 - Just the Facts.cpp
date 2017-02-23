#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
	// var
	int n;
	vector<int> dp(10001, 1);

	// init
	for (int i = 1; i < 10001; i++) {
		dp[i] = dp[i - 1] * i;

		while (dp[i] % 10 == 0)
			dp[i] /= 10;

		dp[i] %= 100000;
	}

	while (cin >> n) {
		printf("%5d -> %d\n", n, dp[n] % 10);
	}
	return 0;
}