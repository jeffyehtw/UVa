#include<iostream>

#define MAX 102

using namespace std;

int m, n;

bool oil[MAX][MAX];
bool collected[MAX][MAX];

void collectOil(int x, int y)
{
	if (x < 0 || y < 0
		|| x >= m || y >= n)
		return;
	else if (!oil[x][y]
		|| collected[x][y])
		return;
	else
	{
		collected[x][y] = true;
		collectOil(x - 1, y - 1);
		collectOil(x - 1, y);
		collectOil(x - 1, y + 1);
		collectOil(x, y - 1);
		collectOil(x, y + 1);	
		collectOil(x + 1, y - 1);
		collectOil(x + 1, y);
		collectOil(x + 1, y + 1);
	}
}

int main()
{
	//ifstream infile;
	//infile.open("input.txt", ios::in);

	while (cin >> m >> n)
	{
		if (!m && !n)
			break;

		cin.get();

		//initialize
		for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			collected[i][j] = false;

		//input
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			char c; cin.get(c);
			if (c == '@')
				oil[i][j] = true;
			else if (c == '*')
				oil[i][j] = false;
			if (j == n - 1)
				cin.get();
		}
		
		//collected
		int count = 0;
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (oil[i][j] && !collected[i][j])
			{
				count++;
				collectOil(i, j);
			}
		}

		//output
		cout << count << endl;
	}
	return 0;
}