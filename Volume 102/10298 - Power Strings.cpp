#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (cin >> s && s != ".")
	{
		bool ok = false;

		for (int i = 1; i <= s.length(); i++)
		{
			if (!(s.length() % i))
			{
				ok = true;
				for (int j = i; j < s.length()
					&& ok; j += i)
				for (int k = 0; k < i && ok; k++)
				if (s[k] != s[j + k])
					ok = false;
			}
			if (ok)
			{
				printf("%d\n", s.length() / i);
				break;
			}
		}
		
	}
	return 0;
}