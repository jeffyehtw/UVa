#include<iostream>
#include<string>

using namespace std;

int main()
{
	//initialize
	string up;
	string down;
	getline(cin, up);
	getline(cin, down);

	int indexOfup[2];
	int indexOfdown[2];
	int index[2] = { 0 };
	for (int i = 0; i < up.length(); i++)
	{
		if (up[i] == ' ')
		{
			if (index[0] == 1)
				indexOfup[0] = i;
			else if (index[0] == 2)
				indexOfdown[0] = i;
			index[0]++;
		}
		if (down[i] == ' ')
		{
			if (index[1] == 1)
				indexOfup[1] = i;
			else if (index[1] == 2)
				indexOfdown[1] = i;
			index[1]++;
		}
	}

	//input
	string s;
	while (getline(cin, s))
	{
		bool isUp = true;
		int n = s.length();

		for (int i = 0; i < n; i += 5)
		{
			int sum = 0;
			int exp = 16;
			for (int j = 0; j < 5; j++)
			{
				sum += (s[i + j] - '0') * exp;
				exp /= 2;
			}

			if (isUp)
			{
				if (sum == indexOfdown[0])
					isUp = false;
				else if (sum != indexOfup[0])
					cout << up[sum];
			}
			else
			{
				if (sum == indexOfup[1])
					isUp = true;
				else if (sum != indexOfdown[1])
					cout << down[sum];
			}
		}
		cout << endl;
	}
	return 0;
}