#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
	long long x;

	while (cin >> x)
	{
		vector<long long> y;

		while (true)
		{
			long long temp; cin >> temp;
			y.push_back(temp);

			char c; cin.get(c);
			if (c == '\n')
				break;
		}
		
		long long sum = 0;
		long long exp = 1;

		for (int i = y.size() - 2; i > -1; i--)
		{
			sum += y[i] * (y.size() - 1 - i) * exp;
			exp *= x;
		}
		cout << sum << endl;
	}
	return 0;
}