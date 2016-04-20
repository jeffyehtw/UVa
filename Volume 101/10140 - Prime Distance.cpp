#include<iostream>
#include<vector>

#define MAX 46341

using namespace std;

vector<int> p;
bool prime[MAX];

void initilize(bool prime[])
{
	//initialize boolean
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i < MAX; i++)
		prime[i] = true;

	for (int i = 2; i < MAX; i++)
	{
		if (prime[i])
		{
			for (int j = i * 2; j < MAX; j += i)
			{
				prime[j] = false;
			}
			p.push_back(i);
		}
	}
}

bool isprime(int n)
{
	if (n < MAX)
		return prime[n];
	else
	for (int i = 0; i < p.size(); i++)
		if (n % p[i] == 0)
			return false;
	return true;
}

int main()
{
	//initialize prime table
	initilize(prime);

	long long n, m;
	while (cin >> n >> m)
	{
		//first last
		int max = INT_MIN;
		long long d1, d2;

		//smallest distance
		int min = INT_MAX;
		long long c1, c2;

		//number of prime
		int counter = 0;

		//j for previous
		for (long long i = n, j = -1; i <= m; i++)
		{
			if (isprime(i))
			{
				if (i - j < min && j > 0)
				{
					min = i - j;
					c1 = j;
					c2 = i;
				}
				if (i - j > max && j > 0)
				{
					max = i - j;
					d1 = j;
					d2 = i;
				}
				counter++;
				j = i;
			}
		}

		if (counter > 1)
		{
			cout << c1 << ",";
			cout << c2 << " are closest, ";
			cout << d1 << ",";
			cout << d2 << " are most distant.\n";
		}
		else
			cout << "There are no adjacent primes.\n";
	}
	return 0;
}