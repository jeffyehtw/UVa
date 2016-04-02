#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (cin >> s && s != "0")
	{
		int even = 0;
		int odd = 0;

		for (int i = 0; i < s.length(); i += 2)
		{
			even += s[i] - '0';
			if (i + 1 < s.length())
				odd += s[i + 1] - '0';
		}

		if (even - odd == 0 || (even - odd) % 11 == 0)
			cout << s << " is a multiple of 11." << endl;
		else
			cout << s << " is not a multiple of 11." << endl;
	}
	return 0;
}