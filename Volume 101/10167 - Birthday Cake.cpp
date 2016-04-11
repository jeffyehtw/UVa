#include<iostream>
#include<vector>

using namespace std;

class point
{
	public:
		point(int a, int b)
			:x(a), y(b) {}
		point() {}
		int x, y;
};

int main()
{
	int n;
	while (cin >> n && n)
	{
		//cherry
		vector<point> p;
		for (int i = 0; i < 2 * n; i++)
		{
			int x, y;
			cin >> x >> y;
			p.push_back(point(x, y));
		}

		bool ok = true;
		for (int i = -500; i < 501 && ok; i++)
		for (int j = -500; j < 501 && ok; j++)
		{
			int upper = 0;
			int lower = 0;

			for (int k = 0; k < p.size(); k++)
			{
				int tmp = p[k].x * i + p[k].y * j;
				if (tmp > 0)
					upper++;
				else if (tmp < 0)
					lower++;
				else
					break;

				//wrong
				if (upper > n || lower > n)
				{
					upper = 0;
					lower = 0;
					break;
				}
				//answer
				if (upper == n && lower == n)
				{
					cout << i << " " << j << endl;
					ok = false;
					break;
				}
			}
		}
	}
	return 0;
}