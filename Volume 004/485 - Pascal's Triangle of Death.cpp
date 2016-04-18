#include<iostream>
#include<vector>

#define MAX 205

using namespace std;

int data[MAX][MAX][MAX] = { 0 };

int main()
{
	for (int i = 0; i < MAX; i++)
		data[i][0][MAX - 1] = 1;
	
	for (int i = 1; i < MAX; i++)
	for (int j = 1; j < MAX; j++)
	{
		//add
		for (int k = 0; k < MAX; k++)
		{
			data[j][i][k] += data[j - 1][i - 1][k];
			data[j][i][k] += data[j - 1][i][k];
		}
		for (int k = MAX - 1; k > 0; k--)
		{
			data[j][i][k - 1] += data[j][i][k] / 10;
			data[j][i][k] %= 10;
		}
	}
	
	for (int i = 1; i <= MAX; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			bool print = false;
			for (int k = 0; k < MAX; k++)
			{
				if (data[i - 1][j - 1][k] != 0)
					print = true;
				if (print)
					cout << data[i - 1][j - 1][k];
			}
			if (j <= i - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}