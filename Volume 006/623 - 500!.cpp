#include<iostream>

#define MAX 1001

using namespace std;

int nums[MAX][5001];

int main()
{
	//initialize
	for (int i = 0; i < MAX; i++)
		nums[i][5000] = { 0 };
	nums[0][5000] = 0;
	nums[1][5000] = 1;

	for (int i = 2; i < MAX; i++)
	{
		//product
		for (int j = 0; j < 5001; j++)
			nums[i][j] = nums[i - 1][j] * i;
		//%10
		for (int j = 5000; j > 0; j--)
		{
			nums[i][j - 1] += nums[i][j] / 10;
			nums[i][j] %= 10;
		}
	}

	int n;
	while (cin >> n)
	{
		cout << n << "!\n";
		if (n == 0)
			cout << 1;
		bool print = false;
		for (int i = 0; i < 5001; i++)
		{
			if (nums[n][i] != 0)
				print = true;
			if (print)
				cout << nums[n][i];
		}
		cout << endl;
	}
	return 0;
}