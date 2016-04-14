#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int LIS(vector<int> var)
{
	int dp[20001];
	for (int i = 0; i < var.size(); i++)
		dp[i] = 1;

	for (int i = var.size() - 1; i > -1; i--)
	for (int j = var.size() - 1; j > i; j--)
	if (var[j] < var[i])
		dp[i] = max(dp[i], dp[j] + 1);

	int n = 0;
	for (int i = 0; i < var.size(); i++)
		n = max(n, dp[i]);
	return n;
}

int main()
{
	int t;
	int round = 1;
	while (cin >> t && t != -1)
	{
		//input
		vector<int> nums;
		nums.push_back(t);
		while (cin >> t && t != -1)
			nums.push_back(t);

		if (round > 1)
			cout << endl;
		cout << "Test #" << round++ << ":\n";
		cout << "  maximum possible ";
		cout << "interceptions: ";
		cout << LIS(nums) << endl;
	}
	return 0;
}