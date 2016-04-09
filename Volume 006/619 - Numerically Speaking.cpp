#include<iostream>
#include<string>

using namespace std;

bool isBigger(int x[], int y[])
{
	for (int i = 0; i < 1001; i++)
	if (x[i] > y[i])
		return true;
	else if (x[i] < y[i])
		return false;
	return false;
}

int main()
{
	string s;
	while (cin >> s && s != "*")
	{
		int nums[1001] = { 0 };
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			for (int i = 0; i < s.length(); i++)
			{
				//generate
				int temp[1001] = { 0 };
				int index = s.length() - 1 - i;
				temp[1000] = s[index] - 'a' + 1;

				for (int j = 0; j < i; j++)
				{
					//product
					for (int k = 0; k < 1001; k++)
						temp[k] *= 26;
					//%10
					for (int k = 1000; k > 0; k--)
					{
						temp[k - 1] += temp[k] / 10;
						temp[k] %= 10;
					}
				}

				//add
				for (int j = 0; j < 1001; j++)
					nums[j] += temp[j];
				//%10
				for (int j = 1000; j > 0; j--)
				{
					nums[j - 1] += nums[j] / 10;
					nums[j] %= 10;
				}
			}
			//output
			bool print = false;
			for (int i = 0; i < 1001; i++)
			{
				if (nums[i] != 0)
					print = true;
				if (print)
					cout << nums[i];
			}
			cout << endl;
		}
		else
		{
			//string to int
			int num[1001] = { 0 };
			for (int i = 0; i < s.length(); i++)
			num[1000 - i] = s[s.length() - 1 - i] - '0';

			int temp[21][1001] = { 0 };
			temp[0][1000] = 1;
			int index;

			for (int i = 1; i < 21; i++)
			{
				for (int j = 0; j < 1001; j++)
					temp[i][j] = temp[i - 1][j] * 26;
				//%10
				for (int j = 1000; j > 0; j--)
				{
					temp[i][j - 1] += temp[i][j] / 10;
					temp[i][j] %= 10;
				}
				if (isBigger(temp[i], num))
				{
					index = i - 1;
					break;
				}
			}
			cout << index << endl;
			for (int i = index; i > -1; i--)
			{
				while (isBigger(num, temp[i]))
				{

				}
			}
		}
	}
	return 0;
}