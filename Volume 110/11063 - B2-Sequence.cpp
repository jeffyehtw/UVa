#include<iostream>

using namespace std;

int main()
{
	int n;
	int counter = 1;

	while (cin >> n && n)
	{
		//initialize table
		bool table[20005];
		for (int i = 0; i < 20005; i++)
			table[i] = false;

		bool ok = true;

		//input
		int a[1005] = { 0 };

		for (int i = 1; i < n + 1; i++)
		{
			cin >> a[i];

			if(a[i] <= a[i - 1])
				ok = false;
		}

		if (ok)
		for (int i = 1; i < n + 1; i++)
		{
			for (int j = i; j < n + 1; j++)
			{
				int sum = a[i] + a[j];

				if (table[sum])
				{
					ok = false;
					break;
				}
				table[sum] = true;
			}
			if (!ok)
				break;
		}

		cout << "Case #" << counter++ << ": ";
		
		if (ok) 
			cout << "It is a B2-Sequence.\n";
		else 
			cout << "It is not a B2-Sequence.\n";
		cout << endl;
	}
	return 0;
}