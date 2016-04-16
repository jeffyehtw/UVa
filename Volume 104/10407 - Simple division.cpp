#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>

using namespace std;

int gcd(int x, int y)
{
	while (x %= y)
		swap(x, y);
	return y;
}

int main()
{
	ifstream infile;
	infile.open("input.txt", ios::in);

	ofstream outfile;
	outfile.open("output.txt", ios::out);

	int n;
	vector<int> nums;
	
	while (infile >> n && n)
	{
		//input
		nums.push_back(n);
		while (infile >> n && n)
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

		outfile << g << endl;
		nums.clear();
	}
	return 0;
}