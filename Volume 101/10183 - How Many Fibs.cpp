#include<iostream>
#include<string>

#define MAX 10001

using namespace std;

int fib[10001][1001];

bool isGreaterEqual(int x[1001], int y[1001])
{
	for (int i = 0; i < 1001; i++)
	{
		if (x[i] > y[i])
			return true;
		else if (x[i] < y[i])
			return false;
	}
	return true;
}

bool isLessEqual(int x[1001], int y[1001])
{
	for (int i = 0; i < 1001; i++)
	{
		if (x[i] < y[i])
			return true;
		else if (x[i] > y[i])
			return false;
	}
	return true;
}

bool isGreater(int x[1001], int y[1001])
{
	for (int i = 0; i < 1001; i++)
	{
		if (x[i] > y[i])
			return true;
		else if (x[i] < y[i])
			return false;
	}
	return false;
}

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

	string n, m;
	while (cin >> n >> m)
	{
		if (n == "0" && m == "0")
			break;

		//input
		int a[1001] = { 0 };
		for (int i = 0; i < n.length(); i++)
		a[1000 - i] = n[n.length() - 1 - i] - '0';

		int b[1001] = { 0 };
		for (int i = 0; i < m.length(); i++)
		b[1000 - i] = m[m.length() - 1 - i] - '0';

		int count = 0;
		for (int i = 1; i < MAX; i++)
		{
			if (isGreaterEqual(fib[i], a)
				&& isLessEqual(fib[i], b))
				count++;
			if (isGreater(fib[i], b))
				break;
		}
		cout << count << endl;
	}
	return 0;
}