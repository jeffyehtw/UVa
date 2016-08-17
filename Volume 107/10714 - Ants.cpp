#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main()
{
	int m;
	while (cin >> m)
	while (m--)
	{
		int L, m;
		cin >> L >> m;

		int pos;
		int fast = 0;
		int slow = 0;
		for (int i = 0; i < m; i++)
		{
			//input
			cin >> pos;

			if (pos > L / 2)
			{
				fast = max(fast, L - pos);
				slow = max(slow, pos);
			}
			else
			{
				fast = max(fast, pos);
				slow = max(slow, L - pos);
			}
		}
		printf("%d %d\n", fast, slow);
	}
	return 0;
}