#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while (cin >> n && n<1001)
	{
		while (n--)
		{
			double x, k;  cin >> x >> k;

			double f = floor(x / k);
			double c = ceil(x / k);

			int p, q;
			bool stop = 0;
			for (p = 0; !stop; p++)
			for (q = 0; p*f + q*c <= x && !stop; q++)
			if (p*f + q*c == x)
				stop = 1;
			cout << p - 1 << " " << q - 1 << endl;
		}
	}
	return 0;
}