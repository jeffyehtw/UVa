#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string temp = "0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	string s;

	while (cin >> s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = temp.find(s[i]);
			s[i] = max(0, (int)s[i]);
		}

		int m = *max_element(s.begin(), s.end()) + 1;
		m = max(m, 2);

		int index = 63;

		for (int i = m; i < 63; i++)
		{
			int rsd = 0;

			for (int j = 0; j < s.length(); j++)
			{
				rsd = rsd * i + s[j];
				rsd %= (i - 1);
			}

			if (rsd == 0)
			{
				index = i;
				break;
			}
		}

		if (index < 63)
			cout << index;
		else
			cout << "such number is impossible!";
		cout << endl;
	}
	return 0;
}