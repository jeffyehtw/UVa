#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isAlpha(char c)
{
	return (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z');
}

string f(string s)
{
	string temp = s;
	for (int i = 0; i < temp.length(); i++)
	{
		if (!isAlpha(temp[i]))
		{
			temp[i] = ' ';
		}
	}
	return temp;
}

bool check(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
			return false;
	}
	return true;
}

int main()
{
	string s;
	while (getline(cin, s))
	{
		s = f(s);

		//split
		vector<string> sub;
		while (true)
		{
			int index = s.find(' ');

			if (index == s.npos)
				break;

			string temp = s.substr(0, index);

			if (check(temp) && temp.length() > 0)
				sub.push_back(temp);

			s = s.substr(index + 1, s.length() - index);
		}


		cout << sub.size() << endl;
	}
	return 0;
}