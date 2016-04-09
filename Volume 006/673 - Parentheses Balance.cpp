#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		cin.get();

		while (n--)
		{
			string s; getline(cin, s);
			stack<char> c;
			bool ok = true;

			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] == '(' || s[i] == '[')
				{
					c.push(s[i]);
				}
				else
				{
					if (c.empty())
						ok = false;
					else
					{
						if ((s[i] == ')' && c.top() != '(')
							|| (s[i] == ']' && c.top() != '['))
							ok = false;
						c.pop();
					}
				}
			}

			if (ok && c.size() == 0)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}