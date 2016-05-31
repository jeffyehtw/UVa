#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			//initialize table
			bool table[3651];
			for (int i = 0; i < 3651; i++)
				table[i] = false;

			int totalDays;
			cin >> totalDays;
			int m; cin >> m;

			while (m--)
			{
				int t; cin >> t;
				for (int i = t; i < totalDays + 1; i += t)
					table[i] = true;
			}

			int count = 0;
			for (int i = 1; i < totalDays + 1; i++)
			{
				if (i % 7 != 6 && i % 7 != 0
					&& table[i])
					count++;
			}
			cout << count << endl;
		}	
	}
	return 0;
}