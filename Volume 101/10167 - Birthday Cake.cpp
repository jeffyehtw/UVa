#include<iostream>
#include<vector>
#include<fstream>

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
	ifstream infile;
	infile.open("input.txt", ios::in);

	ofstream outfile;
	outfile.open("output.txt", ios::out);

	int n;
	while (infile >> n && n)
	{
		//cherry
		vector<point> p;
		for (int i = 0; i < 2 * n; i++)
		{
			int x, y;
			infile >> x >> y;
			p.push_back(point(x, y));
		}

		bool ok = true;
		for (int i = -500; i < 501 && ok; i++)
		{
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

					if (upper == lower && upper)
					{
						outfile << i << " " << j << endl;
						printf("%d %d\n", i, j);
						ok = false;
						break;
					}
				}
			}
		}
	}
	return 0;
}