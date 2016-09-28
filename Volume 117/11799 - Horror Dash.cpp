#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	for (int i = 1; i <= n; i++)
	{
		int t; cin >> t;
		char c; cin.get(c);

		//input
		vector<int> nums;
		nums.push_back(t);
		while (c != '\n')
		{
			cin >> t;
			nums.push_back(t);
			cin.get(c);
		}
		sort(nums.begin(), nums.end());

		//output
		int ans = nums[nums.size() - 1];
		printf("Case %d: %d\n", i, ans);
	}
	return 0;
}