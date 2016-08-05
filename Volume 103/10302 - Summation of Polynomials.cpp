#include<iostream>

using namespace std;

int main()
{
	long long n;
	while (cin >> n)
	{
		long long ans = n * (n + 1) / 2;
		ans *= ans;
		cout << ans << endl;
	}
	return 0;
}