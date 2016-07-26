#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		//input
		bool arr[100][100];
		for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

		//variables
		int rowOdd = 0;
		int colOdd = 0;
		int rowIndex = -1;
		int colIndex = -1;

		for (int i = 0; i < n; i++)
		{
			int x = 0;
			int y = 0;

			for (int j = 0; j < n; j++)
			{
				if (arr[i][j])
					x++;
				if (arr[j][i])
					y++;
			}

			if (x % 2 == 1)
			{
				rowOdd++;
				rowIndex = i;
			}
			if (y % 2 == 1)
			{
				colOdd++;
				colIndex = i;
			}
		}

		if (rowOdd > 1 || colOdd > 1)
			cout << "Corrupt\n";
		else if (rowOdd + colOdd == 0)
			cout << "OK\n";
		else
		{
			cout << "Change bit (";
			cout << rowIndex + 1;
			cout << ",";
			cout << colIndex + 1;
			cout << ")\n";
		}
	}
	return 0;
}