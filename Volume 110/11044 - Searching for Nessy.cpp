#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	while (n--)
	{
		int row, col;
		cin >> row >> col;
		
		int ans = row / 3;
		ans *= col / 3;

		cout << ans << endl;
	}
	return 0;
}