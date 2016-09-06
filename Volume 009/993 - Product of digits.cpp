#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	while (n--)
	{
		//input
		int m; cin >> m;
		
		if (m == 0)
			cout << 0 << endl;
		else if (m == 1)
			cout << 1 << endl;
		else
		{
			int count[10] = { 0 };
			for (int i = 9; i > 1; i--)
			{
				while (m % i == 0)
				{
					count[i]++;
					m /= i;
				}
			}

			if (m == 1)
			for (int i = 2; i < 10; i++)
			for (int j = 0; j < count[i]; j++)
				cout << i;
			else
				cout << -1;
			cout << endl;
		}
	}
	return 0;
}