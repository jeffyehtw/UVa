#include<iostream>

using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (!n && !m)
			break;

		//variables
		int arr[10001];

		//input
		for (int i = 0; i < m; i++)
			cin >> arr[i];
		arr[m] = n;

		int count = 0;
		for (int i = 1; i <= m; i++)
		if (arr[i] > arr[i - 1])
			count += arr[i] - arr[i - 1];

		cout << count << endl;
	}
	return 0;
}