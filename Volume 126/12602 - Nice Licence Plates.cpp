#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		while (n--)
		{
			string s; cin >> s;

			int alpha = 0;
			alpha += (s[0] - 'A') * 676;
			alpha += (s[1] - 'A') * 26;
			alpha += (s[2] - 'A');

			int number = 0;
			number += (s[4] - '0') * 1000;
			number += (s[5] - '0') * 100;
			number += (s[6] - '0') * 10;
			number += (s[7] - '0');

			if (abs(alpha - number) < 101)
				cout << "nice" << endl;
			else
				cout << "not nice" << endl;
		}
	}
	return 0;
}