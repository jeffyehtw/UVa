#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (cin >> s && s != "0")
	{
		//initialize
		int n = 0;
		for (int i = 0; i < s.length(); i++)
			n += s[i] - '0';

		int degree = 1;
		while (n % 9 == 0 && n != 9)
		{
			int sum = 0;
			for (; n; n /= 10)
				sum += n % 10;
			n = sum;
			degree++;
		}

		if (n % 9)
		{
			cout << s << " is not a multiple";
			cout << " of 9." << endl;
		}
		else
		{
			cout << s << " is a multiple of";
			cout << " 9 and has 9-degree ";
			cout << degree << "." << endl;
		}
	}
	return 0;
}