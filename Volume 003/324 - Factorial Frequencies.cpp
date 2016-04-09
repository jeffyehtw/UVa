#include<iostream>

#define MAX 367

using namespace std;

int nums[MAX][1001];

int main()
{
	//initialize
	for (int i = 0; i < MAX; i++)
		nums[i][1000] = { 0 };
	nums[0][1000] = 0;
	nums[1][1000] = 1;

	for (int i = 2; i < MAX; i++)
	{
		//product
		for (int j = 0; j < 1001; j++)
			nums[i][j] = nums[i - 1][j] * i;
		//%10
		for (int j = 1000; j > 0; j--)
		{
			nums[i][j - 1] += nums[i][j] / 10;
			nums[i][j] %= 10;
		}
	}

	int n;
	while (cin >> n && n)
	{
		bool first = false;
		int count[10] = { 0 };

		printf("%d! --\n", n);
		
		for (int i = 0; i < 1001; i++)
		{
			if (nums[n][i] != 0)
				first = true;
			if (first)
				count[nums[n][i]]++;
		}
		for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++)
		{
			int index = i * 5 + j;
			printf("(%d) %d ", index, count[index]);

			if (j == 4)
				cout << endl;
		}
	}
	return 0;
}