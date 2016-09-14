#include<iostream>
#include<vector>
#include<string>
#include<climits>

using namespace std;

int main()
{
	string s = "0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int n;
	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
		{
			cout << "Case " << i << ":\n";

			int ink[123];

			//input ink
			for (int j = 0; j < 10; j++)
				cin >> ink[j + 48];
			for (int j = 0; j < 26; j++)
				cin >> ink[j + 65];

			int m; cin >> m;

			while (m--)
			{
				int num; cin >> num;
				int min = INT_MAX;
				int index;
				vector<int> table;

				for (int j = 2; j < 37; j++)
				{
					int temp = num;
					int sum = 0;

					while (temp)
					{	
						sum += ink[s[temp % j]];
						temp /= j;
					}
					if (sum < min)
					{
						min = sum;
						index = j;
					}
					table.push_back(sum);
				}

				cout << "Cheapest base(s) for number ";
				cout << num << ":";

				for (int i = 0; i < table.size(); i++)
				{
					if (min == table[i])
					{
						cout << " " << i + 2;
					}
				}
				cout << endl;
			}
			if (i < n)
				cout << endl;
		}
	}
	return 0;
}