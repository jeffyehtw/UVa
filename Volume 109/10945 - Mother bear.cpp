#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool isPalindrome(vector<char> c)
{
	if (c.size() == 0)
		return true;

	for (int i = 0; i <= c.size() / 2; i++)
	if (c[i] != c[c.size() - 1 - i])
		return false;
	return true;
}

string stolower(string s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main()
{
	string s;
	while (getline(cin, s))
	{
		if (s == "DONE")
			break;

		s = stolower(s);

		//get punctuations
		vector<char> c;
		for (int i = 0; i < s.length(); i++)
		if (isalpha(s[i]))
			c.push_back(s[i]);

		bool ok = true;
		int n = c.size();

		//output
		if (isPalindrome(c))
			cout << "You won't be eaten!\n";
		else
			cout << "Uh oh..\n";
	}
	return 0;
}