#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	while (n--)
	{
		//train
		vector<int> t;

		int m; cin >> m;
		for (int i = 0; i < m; i++)
		{
			int temp; cin >> temp;
			t.push_back(temp);
		}

		int count = 0;
		for (int i = 0; i < m - 1; i++)
		{
			for (int j = 0; j < m - i - 1; j++)
			if (t[j] > t[j + 1])
			{
				swap(t[j], t[j + 1]);
				count++;
			}
		}
		printf("Optimal train swapping takes");
		printf(" %d swaps.\n", count);
	}
	return 0;
}