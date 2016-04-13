#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	double L, W;
	while (cin >> L >> W)
	{
		//max
		double m = 0;
		m = (L + W);
		m -= sqrt(L*(L - W) + W * W);
		m /= 6;

		//min
		double n = min(L, W) * 0.5;
		printf("%.3lf", m + (1E-6));
		printf(" %.3lf", 0.0);
		printf(" %.3lf\n", n + (1E-6));
	}
	return 0;
}