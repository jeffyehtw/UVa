#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int table[123];

string decode(vector<char> var)
{
	//buffer
	vector<int> b;

	for (int i = 0; i < var.size(); i++)
	{
		int tmp = table[var[i]];

		for (int j = 0; j < 6; j++)
		{
			b.push_back(tmp % 2);
			tmp /= 2;
		}
		reverse(b.begin() + i * 6, b.end());

		for (int j = 6 * i; j < b.size(); j++)
			cout << b[j];
		cout << endl;
	}

	string s = "   ";
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		int exp = 1;
		for (int j = 0; j < 8; j++)
		{
			sum += b[(i + 1) * 8 - 1 - j] * exp;
			exp *= 2;
		}
		cout << " " << sum << endl;
		s[i] = char(sum);
	}
	return s;
}

int main()
{
	//initialize table
	for (int i = 0; i < 26; i++)
	{
		table['A' + i] = i;
		table['a' + i] = 26 + i;
	}
	for (int i = 0; i < 10; i++)
		table['0' + i] = 52 + i;
	table['+'] = 62;
	table['/'] = 63;

	string s;
	while (getline(cin, s))
	{
		s = "VGhpc01zVGVzdA=="
			"QSBUZXN0IElucHV0W3soKX1d";

		vector<char> buffer;

		for (int i = 0; i < s.length(); i++)
		{
			if ((s[i] >= 'A' && s[i] <= 'Z')
				|| (s[i] >= 'a' && s[i] <= 'z'
				|| (s[i] >= '0' && s[i] <= '9')))
				buffer.push_back(s[i]);

			if (s[i] == '=')
				buffer.clear();

			if (buffer.size() == 4)
			{
				for (int j = 0; j < 4; j++)
					cout << buffer[j];
				cout << endl;
				cout << decode(buffer) << endl;
				buffer.clear();
			}
		}
		cout << endl;
	}
	return 0;
}