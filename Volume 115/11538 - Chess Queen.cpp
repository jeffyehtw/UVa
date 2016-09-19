#include<iostream>

using namespace std;

int main()
{
	unsigned long long m, n;
	while (cin >> m >> n && (m && n))
	{
		unsigned long long temp;

		if (m > n)
		{
			temp = m;
			m = n;
			n = temp;
		}

		unsigned long long ans = m*n*(m+n-2);
		ans += 2*m*(m-1)*(3*n-m-1)/3;

		cout << ans << endl;
	}
	return 0;
}