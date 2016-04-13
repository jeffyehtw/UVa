#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while (cin >> n && n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += pow(n - (i + 1) + 1, 2.0);
		}
		cout << sum << endl;
	}
	return 0;
}