#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int gcd(int x, int y)
{
	while (x %= y)
		swap(x, y);
	return y;
}

int main()
{
	int n;
	vector<int> nums;
	
	while (cin >> n && n)
	{
		//input
		nums.push_back(n);
		while (cin >> n && n)
			nums.push_back(n);

		sort(nums.begin(), nums.end());

		//skip the smallest
		int min = nums[0];
		for (int i = 0; i < nums.size(); i++)
			nums[i] -= min;

		//gcd
		int g = nums[0];
		for (int i = 1; i < nums.size(); i++)
			if(nums[i] != 0)
				g = gcd(g, nums[i]);

		cout << g << endl;
		nums.clear();
	}
	return 0;
}