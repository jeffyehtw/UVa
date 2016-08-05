#include<iostream>

using namespace std;

int checkMine(int x, int y, bool mine[][12])
{
	int count = 0;
	for (int i = -1; i < 2; i++)
	for (int j = -1; j < 2; j++)
	if (mine[x + i][y + j])
		count++;

	if (mine[x][y])
		count--;

	return count;
}

void initialize(int m, bool mine[][12])
{
	for (int i = 0; i <= m + 1; i++)
	{
		mine[0][i] = false;
		mine[i][0] = false;
		mine[m + 1][i] = false;
		mine[i][m + 1] = false;
	}
}

int main()
{
	int n;
	while (cin >> n)
	for (int i = 0; i < n; i++)
	{
		//input
		int m; cin >> m;
		cin.get();

		//initialize
		bool mine[12][12];
		initialize(m, mine);

		for (int j = 1; j <= m; j++)
		for (int k = 1; k <= m; k++)
		{
			char c; cin.get(c);
			mine[j][k] = c == '*';

			if (k == m)
				cin.get();
		}

		//count
		bool touched[12][12];
		bool mineTouched = false;
		for (int j = 1; j <= m; j++)
		for (int k = 1; k <= m; k++)
		{
			char c; cin.get(c);
			touched[j][k] = c == 'x';

			if (c == 'x' && mine[j][k])
				mineTouched = true;

			if (k == m)
				cin.get();
		}

		//output
		for (int j = 1; j <= m; j++)
		for (int k = 1; k <= m; k++)
		{
			if (touched[j][k])
			{
				if (!mine[j][k])
					cout << checkMine(j, k, mine);
				else
				{
					cout << "*";
				}
			}
			else
			{
				if (mine[j][k] && mineTouched)
					cout << "*";
				else
					cout << ".";
			}

			if (k == m)
				cout << endl;
		}
		if (i < n - 1)
			cout << endl;
	}
	return 0;
}