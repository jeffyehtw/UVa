#include<iostream>

using namespace std;

void print(long long var)
{
	if (var / 10000000 > 0)
	{
		print(var / 10000000);
		cout << " kuti";
		var %= 10000000;
	}
	if (var / 100000 > 0)
	{
		print(var / 100000);
		cout << " lakh";
		var %= 100000;
	}
	if (var / 1000 > 0)
	{
		print(var / 1000);
		cout << " hajar";
		var %= 1000;
	}
	if (var / 100 > 0)
	{
		print(var / 100);
		cout << " shata";
		var %= 100;
	}

	if (var > 0)
		cout << " " << var;
}

int main()
{
	long long n;
	int counter = 1;

	while (cin >> n)
	{
		printf("%4d.", counter);

		if (n > 0)
			print(n);
		else
			cout << " 0";
		printf("\n");

		counter++;
	}
	return 0;
}