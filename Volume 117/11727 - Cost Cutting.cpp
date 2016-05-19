#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			vector<int> num;
			
			for (int i = 0; i < 3; i++)
			{
				int temp;
				cin >> temp;
				num.push_back(temp);
			}
			sort(num.begin(), num.end());
			printf("Case %d: %d\n", i + 1, num[1]);
		}
	}
	return 0;
}
