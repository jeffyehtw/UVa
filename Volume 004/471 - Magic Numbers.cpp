#include<iostream>

#define MAX 9876543210

using namespace std;

bool ok(long long var)
{
	bool temp[10];
	for (int i = 0; i < 10; i++)
		temp[i] = false;

	while (var)
	{
		if (temp[var % 10])
			return false;
		temp[var % 10] = true;
		var /= 10;
	}
	return true;
}

int main()
{
	int n;
	bool first = true;
	while (cin >> n)
	while (n--)
	{
		if (!first)
			cout << endl;
		first = false;

		long long m;
		cin >> m;

		for (long long i = 1; i * m <= MAX; i++)
		if (ok(i) && ok(i * m))
		{
			printf("%lld / %lld", i * m, i);
			printf("= %lld\n", m);
		}
	}
	return 0;
}