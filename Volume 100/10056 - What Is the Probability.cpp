#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int s;

	while (cin >> s)
	{
		int n, m;
		double p;

		while (s--)
		{
			cin >> n >> p >> m;

			if (p < 0.00001)
				cout << "0.0000\n";
			else
			{
				double ans;
				ans = pow(1 - p, m - 1) * p;
				ans /= (1 - pow(1 - p, n));

				printf("%.4lf\n", ans);
			}
		}
	}
	return 0;
}