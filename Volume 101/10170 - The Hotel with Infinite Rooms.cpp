#include<iostream>

using namespace std;

int main()
{
	long long n, d;

	while (cin >> n >> d)
	{
		for (int i = 0; ; i++)
		{
			long long current;
			current = n + (n + i);
			current *= (i + 1);
			current /= 2;

			if (current >= d)
			{
				cout << n + i << endl;
				break;
			}
		}
	}
	return 0;
}