#include<iostream>
#include<string>

using namespace std;

char direction(char current, char c)
{
	string data = "NESW";

	int temp[26];
	temp['N' - 'A'] = 0;
	temp['E' - 'A'] = 1;
	temp['S' - 'A'] = 2;
	temp['W' - 'A'] = 3;

	int index = temp[current - 'A'];

	if (c == 'R')
		index++;
	else if (c == 'L')
		index--;

	return data[(index + 4) % 4];
}

bool lost(int n, int m, int x, int y)
{
	return !((x >= 0 && x <= n)
		&& (y >= 0 && y <= m));
}

int main()
{
	int n, m;
	cin >> n >> m;

	int x, y;
	string temp;

	bool scent[51][51];

	for (int i = 0; i < 51; i++)
	for (int j = 0; j < 51; j++)
		scent[i][j] = false;

	while (cin >> x >> y >> temp)
	{
		//direction
		char d = temp[0];

		//movement
		cin >> temp;

		bool ok = true;

		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == 'F')
			{
				if (d == 'N')
				{
					y++;

					if (ok && lost(n, m, x, y))
					{
						if (!scent[x][y - 1])
						{
							cout << x << " ";
							cout << y - 1 << " ";
							cout << d << " ";
							cout << "LOST" << endl;

							ok = false;
							scent[x][y - 1] = true;
						}
						else
							y--;
					}
				}
				else if (d == 'E')
				{
					x++;

					if (ok && lost(n, m, x, y))
					{
						if (!scent[x - 1][y])
						{
							cout << x - 1 << " ";
							cout << y << " ";
							cout << d << " ";
							cout << "LOST" << endl;

							ok = false;
							scent[x - 1][y] = true;
						}
						else
							x--;
					}
				}
				else if (d == 'S')
				{
					y--;

					if (ok && lost(n, m, x, y))
					{
						if (!scent[x][y + 1])
						{
							cout << x << " ";
							cout << y + 1 << " ";
							cout << d << " ";
							cout << "LOST" << endl;

							ok = false;
							scent[x][y + 1] = true;
						}
						else
							y++;
					}
				}
				else if (d == 'W')
				{
					x--;

					if (ok && lost(n, m, x, y))
					{
						if (!scent[x + 1][y])
						{
							cout << x + 1 << " ";
							cout << y << " ";
							cout << d << " ";
							cout << "LOST" << endl;

							ok = false;
							scent[x + 1][y] = true;
						}
						else
							x++;
					}
				}
			}
			else
				d = direction(d, temp[i]);
		}
		if (ok)
			cout << x << " " << y << " " << d << endl;
	}

	return 0;
}