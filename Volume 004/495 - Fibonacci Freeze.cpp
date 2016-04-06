#include<iostream>

#define MAX 5001

using namespace std;

int fib[MAX][1500];

int main()
{
	//initialize
	for (int i = 0; i < MAX; i++)
	for (int j = 0; j < 1500; j++)
		fib[i][j] = 0;
	fib[1][0] = 1;

	for (int i = 2; i < MAX; i++)
	{
		for (int j = 0; j < 1500; j++)
		{
			fib[i][j] += fib[i - 1][j];
			fib[i][j] += fib[i - 2][j];

			if (j < 1499 && fib[i][j] > 9)
			{
				fib[i][j + 1] += fib[i][j] / 10;
				fib[i][j] %= 10;
			}
		}
	}

	int n;
	while (cin >> n)
	{
		cout << "The Fibonacci number for ";
		cout << n << " is ";

		if (n == 0)
			cout << 0;

		bool print = false;
		for (int i = 1499; i > -1; i--)
		{
			if (fib[n][i] > 0)
				print = true;
			if (print)
				cout << fib[n][i];
		}
		cout << endl;
	}
	return 0;
}