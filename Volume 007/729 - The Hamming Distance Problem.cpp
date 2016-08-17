#include<iostream>
#include<vector>

#define MAX 65536

using namespace std;

class obj
{
	public:
		obj() {}
		obj(int var)
		{
			this->h = 0;
			for (int i = 0; i < 16; i++)
			{
				bit[i] = var % 2;
				var /= 2;
				if (bit[i] == 1)
					h++;
			}
		}
		int bit[16];
		int h;
};

obj x[65536];

int main()
{
	//initialize
	for (int i = 0; i < 65536; i++)
		x[i] = obj(i);

	int m;
	bool first = true;
	while (cin >> m)
	while (m--)
	{
		int n, h;
		cin >> n >> h;
		
		if (!first)
			cout << endl;
		first = false;

		//output
		int max = pow(2, n);
		for (int i = 0; i < max; i++)
		{
			if (x[i].h == h)
			{
				for (int j = 0; j < n; j++)
				cout << x[i].bit[n - 1 - j];
				cout << endl;
			}
		}
	}
	return 0;
}