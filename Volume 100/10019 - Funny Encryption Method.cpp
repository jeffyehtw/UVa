#include<iostream>

using namespace std;

int countDigit(int num)
{
	int count = 0;

	while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}

	return count;
}

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int temp; cin >> temp;
			cout << countDigit(temp) << " ";

			int sum = 0;
			while (temp)
			{
				sum += countDigit(temp % 10);
				temp /= 10;
			}
			cout << sum << endl;
		}
	}
	return 0;
}