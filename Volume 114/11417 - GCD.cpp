#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int x, int y)
{
	while (x %= y)
		swap(x, y);
	return y;
}
int main()
{
	//initialize
	int table[502] = { 0 };
	for (int i = 1; i < 502; i++)
	{
		table[i] = table[i - 1];
		for (int j = 1; j < i; j++)
			table[i] += gcd(i, j);
	}

	int n;
	while (cin >> n && n)
	printf("%d\n", table[n]);
	return 0;
}