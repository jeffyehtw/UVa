#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	string s;
	while (cin >> s && s != "0")
	{
		while (s.length() > 2)
		{
			int d = s[s.length() - 1] - '0';

			s = s.substr(0, s.length() - 1);

			int temp = 0;
			temp += (s[s.length() - 2] - '0') * 10;
			temp += s[s.length() - 1] - '0';

			temp -= 5 * d;

			s[s.length() - 2] = temp / 10 + '0';
			s[s.length() - 1] = temp % 10 + '0';
		}
		int sum = 0;
		sum += (s[s.length() - 2] - '0') * 10;
		sum += s[s.length() - 1] - '0';

		if (sum % 17 == 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}