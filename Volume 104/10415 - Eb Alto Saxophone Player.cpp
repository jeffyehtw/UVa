#include<iostream>
#include<string>

using namespace std;

int main()
{
	string table[14] = { "0111001111",
		"0111001110", "0111001100",
		"0111001000", "0111000000",
		"0110000000", "0100000000",
		"0010000000", "1111001110",
		"1111001100", "1111001000",
		"1111000000", "1110000000",
		"1100000000" };

	int n;
	while (cin >> n)
	{
		cin.get();

		while (n--)
		{
			string current = "0000000000";
			int count[10] = { 0 };

			string s; getline(cin, s);

			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] == 'c')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[0][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'd')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[1][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'e')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[2][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'f')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[3][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'g')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[4][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'a')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[5][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'b')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[6][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'C')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[7][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'D')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[8][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'E')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[9][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'F')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[10][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'G')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[11][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'A')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[12][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
				else if (s[i] == 'B')
				{
					for (int i = 0; i < 10; i++)
					{
						if (table[13][i] == '1')
						{
							if (current[i] == '0')
								count[i]++;
							current[i] = '1';
						}
						else
							current[i] = '0';
					}
				}
			}
			//output
			for (int i = 0; i < 10; i++)
			{
				cout << count[i];

				if (i < 9)
					cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}