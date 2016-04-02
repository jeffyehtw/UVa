#include<iostream>
#include<string>

using namespace std;

void initialize(char alpha[], char number[])
{
	//alphabet
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = NULL;
	}
	alpha[0] = 'A';
	alpha[4] = '3';
	alpha[7] = 'H';
	alpha[8] = 'I';
	alpha[9] = 'L';
	alpha[11] = 'J';
	alpha[12] = 'M';
	alpha[14] = 'O';
	alpha[18] = '2';
	alpha[19] = 'T';
	alpha[20] = 'U';
	alpha[21] = 'V';
	alpha[22] = 'W';
	alpha[23] = 'X';
	alpha[24] = 'Y';
	alpha[25] = '5';

	for (int i = 0; i < 10; i++)
	{
		number[i] = NULL;
	}
	number[1] = '1';
	number[2] = 'S';
	number[3] = 'E';
	number[5] = 'Z';
	number[8] = '8';
}

bool isAlpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int main()
{
	char alpha[26], number[9];
	initialize(alpha, number);

	string s;
	while (!(cin >> s).eof())
	{
		bool palindrome = false;
		bool mirrored = false;

		int p = 0;
		int m = 0;
		int middle = s.length() / 2;

		//palindrome
		for (int i = 0; i < middle; i++)
		{
			if (s[i] == s[s.length() - 1 - i])
				p++;
		}

		//mirrored
		for (int i = 0; i < s.length(); i++)
		{
			//mirrored
			if (isAlpha(s[i]))
			{
				if (alpha[s[i] - 'A'] 
					&& alpha[s[i] - 'A'] == s[s.length() - 1 - i])
					m++;
			}
			else
			{
				if (number[s[i] - '0'] 
					&& number[s[i] - '0'] == s[s.length() - 1 - i])
					m++;
			}
		}

		if (s.length() % 2 == 0)
			p *= 2;
		else
			p = 2 * p + 1;

		if (s.length() == p)
			palindrome = true;

		if (m == s.length())
			mirrored = true;

		//output
		cout << s;
		if (palindrome && mirrored)
			printf(" -- is a mirrored palindrome.\n\n");
		else if (palindrome)
			printf(" -- is a regular palindrome.\n\n");
		else if (mirrored)
			printf(" -- is a mirrored string.\n\n");
		else
			printf(" -- is not a palindrome.\n\n");
	}
	return 0;
}