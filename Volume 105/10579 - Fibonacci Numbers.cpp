#include<iostream>

#define MAX 10001

using namespace std;

int fib[10001][1001];

int main()
{
	//initialize
	for (int i = 0; i < MAX; i++)
		fib[i][1001] = { 0 };
	fib[0][1000] = 1;
	fib[1][1000] = 1;

	for (int i = 2; i < MAX; i++)
	{
		//add
		for (int j = 0; j < 1001; j++)
		{
			fib[i][j] += fib[i - 1][j];
			fib[i][j] += fib[i - 2][j];
		}
		//%10
		for (int j = 1000; j > 0; j--)
		{
			fib[i][j - 1] += fib[i][j] / 10;
			fib[i][j] %= 10;
		}
	}

	int n;
	while (cin >> n)
	{
		bool print = false;
		for (int i = 0; i < 1001; i++)
		{
			if (fib[n - 1][i] != 0)
				print = true;
			if (print)
				cout << fib[n - 1][i];
		}
		cout << endl;
	}
	return 0;
}