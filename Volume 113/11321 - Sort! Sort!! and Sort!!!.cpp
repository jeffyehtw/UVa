#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class obj
{
	public:
		obj(int x, int y) 
		{
			num = x;
			r = x % y;
		}
		obj() {}
		int num;
		int r;

		bool operator<(obj &x) const
		{
			
			if (r != x.r)
			{
				return r < x.r;
			}
			else
			{
				int aOdd = abs(num % 2);
				int bOdd = abs(x.num % 2);

				if (aOdd == bOdd)
				{
					if (aOdd % 2 == 0)
						return num < x.num;
					else
						return num > x.num;
				}
				else
					return aOdd > bOdd;
			}
		}
};

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << n << " " << m << endl;

		if (!n)
			break;

		vector<obj> x;

		for (int i = 0; i < n; i++)
		{
			int temp; cin >> temp;
			x.push_back(obj(temp, m));
		}
		sort(x.begin(), x.end());

		for (int i = 0; i < x.size(); i++)
			cout << x[i].num << endl;
	}
	return 0;
}