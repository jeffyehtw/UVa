#include<iostream>

#define MAX 729

using namespace std;

int squreSum(int x)
{
	int sum = 0;
	while (x)
	{
		sum += (x % 10) * (x % 10);
		x /= 10;
	}
	return sum;
}

bool isHappy(int var)
{
	//initialize
	bool table[MAX + 1];
	for (int i = 0; i < MAX + 1; i++)
		table[i] = false;

	int temp = squreSum(var);
	while (true)
	{
		if (table[temp])
			return false;
		if (temp == 1)
			return true;
		table[temp] = true;
		temp = squreSum(temp);
	}
}

int main()
{
	int n;
	while (cin >> n)
	for (int i = 1; i <= n; i++)
	{
		int m; cin >> m;

		printf("Case #%d: %d is", i, m);
		if (isHappy(m))
			printf(" a Happy number.\n");
		else
			printf(" an Unhappy number.\n");
	}
	return 0;
}