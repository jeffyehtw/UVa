#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		int size = pow(10.0, n / 2);

		for (int i = 0; i < size; i++)
		{
			int temp = i * i;
			if ((temp / size) + (temp % size) == i)
			{
				if (n == 2)
					printf("%02d\n", temp);
				else if (n == 4)
					printf("%04d\n", temp);
				else if (n == 6)
					printf("%06d\n", temp);
				else if (n == 8)
					printf("%08d\n", temp);
			}
		}
	}
	return 0;
}