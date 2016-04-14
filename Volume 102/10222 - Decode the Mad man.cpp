#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, data = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while (getline(cin, s) && s.length() > 0)
	{
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 0; j < data.length(); j++)
			{
				if (s[i] == data[j] || s[i] == toupper(data[j]))
				{
					s[i] = data[j - 2];
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}