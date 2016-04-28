#include<iostream>
#include<string>
#include<cmath>

#define MAX 1000000

using namespace std;

void initialize(bool prime[])
{ 
	for (int i = 0; i < MAX + 1; i++)
	{
		prime[i] = true;
	}

	prime[0] = false;

	for (int i = 2; i < MAX + 1; i++)
	{
		if (prime[i])
		{
			for (int j = 2 * i; j < MAX + 1; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

int stringToint(string s)
{
	int number = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int ex = s.length() - 1 - i;
		number += (s[i] - '0') * pow(10, ex);
	}
	return number;
}

int main()
{
	//construct table
	bool table[MAX + 1];
	initialize(table);

	string s;
	while (cin >> s)
	{	
		int original = stringToint(s);

		if (original > 0 && original < MAX + 1)
		{
			bool prime = table[original];
			bool emirp = false;

			if (prime)
			{
				//reverse s
				string temp = s;
				for (int i = 0; i < s.length(); i++)
					temp[i] = s[s.length() - 1 - i];

				int reverse = stringToint(temp);

				emirp = table[reverse];
				emirp &= s.length() > 1;
				emirp &= s != temp;
			}

			cout << s;
			if (emirp)
				cout << " is emirp.";
			else if (prime)
				cout << " is prime.";
			else
				cout << " is not prime.";
			cout << endl;
		}
		else
			cout << s << " is not prime." << endl;

		
	}
	return 0;
}