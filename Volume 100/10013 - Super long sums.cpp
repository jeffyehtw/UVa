#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int m; cin >> m;
			vector<int> x, y;

			for (int i = 0; i < m; i++)
			{
				int a, b;
				cin >> a >> b;
				x.push_back(a);
				y.push_back(b);
			}


			for (int i = 0; i < m; i++)
				x[i] += y[i];

			for (int i = m - 1; i > 0; i--)
			if (x[i] > 9)
			{
				x[i - 1] += x[i] / 10;
				x[i] %= 10;
			}

			for (int i = 0; i < m; i++)
				cout << x[i];
			cout << endl;

			if (n)
			cout << endl;
		}
	}
	return 0;
}