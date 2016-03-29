#include<iostream>

using namespace std;

int main()
{
	//initialize fib
	int fib[40];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < 40; i++)
	fib[i] = fib[i - 1] + fib[i - 2];

	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int m; cin >> m;
			bool print = false;

			cout << m << " = ";

			for (int i = 39; i > 1; i--)
			{
				if (m >= fib[i])
				{
					cout << "1";
					m -= fib[i];
					print = true;
				}
				else if (print)
					cout << "0";
			}
			cout << " (fib)" << endl;
		}
	}
	return 0;
}