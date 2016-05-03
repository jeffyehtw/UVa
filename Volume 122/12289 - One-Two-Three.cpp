#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	while (n--)
	{
		//input
		string s; cin >> s;

		if (s.length() == 5)
			cout << 3 << endl;
		else
		{
			//judge
			int one = 0;

			if (s[0] == 'o')
				one++;
			if (s[1] == 'n')
				one++;
			if (s[2] == 'e')
				one++;

			//output
			if (one >= 2)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
	}
	return 0;
}