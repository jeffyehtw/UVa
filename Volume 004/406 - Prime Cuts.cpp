#include<iostream>
#include<fstream>

using namespace std;

void initilize(int prime[])
{
	bool temp[1001];

	//initialize boolean
	temp[0] = false;
	temp[1] = true;
	for (int i = 2; i < 1001; i++)
	{
		temp[i] = true;
	}
	
	for (int i = 2; i < 1001; i++)
	{
		if (temp[i])
		{
			for (int j = i * 2; j < 1001; j += i)
			{
				temp[j] = false;
			}
		}
	}

	// j for prime[]
	for (int i = 0, j = 0; i < 1001; i++)
	{
		if (temp[i])
		{
			prime[j] = i;
			j++;
		}
	}
}

int searchIndex(int n, int prime[])
{
	for (int i = 0; i < 169; i++)
	{
		if (n < prime[i])
			return i;
	}
	//not found
	return 169;
}

int main()
{
	int prime[169];
	initilize(prime);

	int n, c;
	while (scanf("%d %d", &n, &c) != EOF)
	{
		int size = searchIndex(n, prime);
		int middle = size / 2;
		int index = middle - c;

		//print size
		int num = 2 * c;

		if (size % 2 == 1)
		{
			index++;
			num--;
		}

		printf("%d %d:", n, c);
		if (num > size)
		{
			for (int i = 0; i < size; i++)
			{
				printf( " %d", prime[i]);
			}
		}
		else
		{
			for (int i = 0; i < num; i++)
			{
				printf( " %d", prime[index + i]);
			}
		}
		printf( "\n\n" );
	}
	return 0;
}
