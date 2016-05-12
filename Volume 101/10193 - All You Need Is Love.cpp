#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int gcd(int x, int y)
{
	if (x < y)
		return gcd(y, x);
	if (y == 0)
		return x;
	return gcd(y, x % y);
}

int toInteger(string s)
{
	int sum = 0;

	for (int i = 0; i < s.length(); i++)
	{
		double exp = s.length() - 1 - i;
		sum += (s[i] - '0') * pow(2.0, exp);
	}
	return sum;
}

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
		{
			string s1, s2;
			cin >> s1 >> s2;

			int n1 = toInteger(s1);
			int n2 = toInteger(s2);

			printf("Pair #%d: ", i);
			if (gcd(n1, n2) > 1)
				printf("All you need is love!\n");
			else
				printf("Love is not all you need!\n");
		}
	}
	return 0;
}