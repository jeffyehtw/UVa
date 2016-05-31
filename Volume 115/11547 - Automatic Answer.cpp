#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	while (n--)
	{
		int m; cin >> m;

		m *= 567;
		m /= 9;
		m += 7492;
		m *= 235;
		m /= 47;
		m -= 498;

		m %= 100;
		m /= 10;

		cout << abs(m) << endl;
	}
	return 0;
}