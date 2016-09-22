#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.get();

		//input
		string s;
		getline(cin, s);

		int m = 0;
		int f = 0;
		for (int j = 0; j < s.length(); j++)
		if (s[j] == 'M')
			m++;
		else if (s[j] == 'F')
			f++;

		if (m == f && m > 1)
			cout << "LOOP\n";
		else
			cout << "NO LOOP\n";
	}
	return 0;
}