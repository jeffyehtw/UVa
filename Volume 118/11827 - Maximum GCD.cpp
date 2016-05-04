#include<iostream>
#include<vector>
#include<string>
#include<sstream>
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
	while (cin >> n && n)
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.get();
		
		//input
		string s;
		getline(cin, s);
		stringstream ss(s);
		
		int temp;
		vector<int> num;
		while (ss >> temp)
			num.push_back(temp);
		sort(num.begin(), num.end());

		for (int j = 0; j < num.size(); j++)
			cout << num[j] << " ";
		cout << endl;

		int m = num.size();
		int max = 0;
		for (int j = 0; j < m; j++)
		for (int k = j + 1; k < m; k++)
		{
			int g = gcd(num[j], num[k]);
			if (g > max)
				max = g;
		}
		cout << max << endl;
	}
	return 0;
}