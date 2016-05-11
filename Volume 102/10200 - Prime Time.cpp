#include<iostream>

#define MAX 100010042

using namespace std;

bool prime[MAX];

void initilize(bool prime[])
{
	//initialize boolean
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i < MAX; i++)
		prime[i] = true;

	for (int i = 2; i < MAX; i++)
	{
		if (prime[i])
		{
			for (int j = i * 2; j < MAX; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

int main()
{
	//initialize prime table
	initilize(prime);

	int n, m;
	while (cin >> n >> m)
	{
		//variables
		double ok = 0;

		for (int i = n; i < m + 1; i++)
		if (prime[i * i + i + 41])
			ok++;

		double ans = ok * 100;
		ans /= (m - n + 1);

		//output
		printf("%.2lf\n", ans + (1e-8));
	}
	return 0;
}