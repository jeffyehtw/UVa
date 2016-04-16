#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		list<char> c;
		list <char>::iterator it = c.begin();

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '[')
				it = c.begin();
			else if (s[i] == ']')
				it = c.end();
			else
				c.insert(it, s[i]);
		}
		for (it = c.begin(); it != c.end(); it++)
			cout << *it;
		cout << endl;
	}
	return 0;
}