#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		vector<int> house;
		while (n--)
		{
			int temp; cin >> temp;
			house.push_back(temp);
		}
		for (int i = 1; i < house.size(); i++)
		{
			house[i] += house[i - 1];
		}
		long sum = 0;
		for (int i = 0; i < house.size(); i++)
			sum += abs(house[i]);
		cout << sum << endl;
	}
	return 0;
}
