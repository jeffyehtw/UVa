#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;

	while (getline(cin, a))
	{
		getline(cin, b);

		//count
		int ca[123] = { 0 };
		int cb[123] = { 0 };

		for (int i = 0; i < a.length(); i++)
			ca[a[i]]++;
		for (int i = 0; i < b.length(); i++)
			cb[b[i]]++;

		for (int i = 97; i < 124; i++)
		{
			int print = min(ca[i], cb[i]);
			for (int j = 0; j < print; j++)
				cout << (char)i;
		}
		cout << endl;
	}
	return 0;
}