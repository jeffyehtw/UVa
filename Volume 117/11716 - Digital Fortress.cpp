#include<iostream>
#include<string>
#include<cmath>

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

			int temp = pow((double)s.length(), 0.5);

			if (temp * temp == s.length())
			{
				for (int i = 0; i < temp; i++)
				{
					for (int j = 0; j < temp; j++)
						cout << s[i + j * temp];
				}
			}
			else
				cout << "INVALID";
			cout << endl;
		}
	}
	return 0;
}