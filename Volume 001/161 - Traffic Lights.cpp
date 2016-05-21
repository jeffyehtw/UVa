#include<iostream>
#include<algorithm>

using namespace std;

class obj
{
public:
	obj() {}
	obj(int var)
	{
		g = var - 5;
		y = 5;
		r = var;
	}
	int g;
	int y;
	int r;
};

void printTime(int var)
{
	int h = var / 60 / 60;
	int m = (var / 60) % 60;
	int s = var % 60;

	printf("%02d:%02d:%02d\n", h, m, s);
}

int main()
{
	int stop = 0;
	while (stop < 3)
	{
		//variables
		int t, n = 0;
		int timer = 18000;

		obj light[102];
		while (cin >> t && stop < 3)
		if (t != 0)
		{
			stop = 0;

			light[n] = obj(t);
			timer = min(timer, t);
			n++;
		}
		else if (n > 0)
		{
			timer *= 2;

			bool ok;
			for (; timer < 18001; timer++)
			{
				ok = true;
				for (int j = 0; j < n && ok; j++)
				if (timer % (light[j].r * 2) > light[j].g - 1)
					ok = false;

				if (ok)
					break;
			}

			if (ok)
				printTime(timer);
			else
			{
				cout << "Signals fail to ";
				cout << "synchronise in 5 hours\n";
			}

			n = 0;
			stop++;
		}
		else
			stop++;
	}
	return 0;
}