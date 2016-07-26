#include<iostream>
#include<string>
#include<vector>

#define MAX 100001

using namespace std;

vector<int> p;
bool prime[MAX];

void initilize()
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
	initilize();
	int size = p.size();

	int n;
	while (cin >> n && n)
	while (n--)
	{
		int num; cin >> num;

		for (int i = num + 1;; i++)
		{
			if (!isprime(i))
			{
				//factor list
				vector<int> list;
				int backup = i;
				for (int j = 0; j < size && backup > p[j];)
				{
					if (!(backup % p[j]))
					{
						list.push_back(p[j]);
						backup /= p[j];
					}
					else
						j++;
				}
				if (backup > 1)
					list.push_back(backup);

				//sum of factor
				int factor = 0;
				for (int j = 0; j < list.size(); j++)
				{
					string temp = to_string(list[j]);
					for (int k = 0; k < temp.length(); k++)
						factor += temp[k] - '0';
				}

				int digit = 0;
				string ns = to_string(i);
				for (int j = 0; j < ns.length(); j++)
					digit += ns[j] - '0';

				if (factor == digit)
				{
					cout << i << endl;
					break;
				}
			}
		}
	}
	return 0;
}