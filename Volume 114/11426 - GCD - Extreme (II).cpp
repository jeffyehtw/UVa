#include<iostream>
#include<cstring>

#define MAX 4000001

using namespace std;

int phi[MAX];

long long f[MAX];
long long s[MAX];

int main()
{
	//initialize phi
	for (int i = 2; i < MAX; i++)
		phi[i] = 0;
	phi[1] = 1;

	for (int i = 2; i < MAX; i++)
	{
		if (!phi[i])
		{
			for (int j = i; j < MAX; j += i)
			{
				if (!phi[j])
					phi[j] = j;
				phi[j] = phi[j] / i * (i - 1);
			}
		}
	}

	//initialize f
	memset(f, 0, sizeof(f));

	for (int i = 1; i < MAX; i++)
	for (int j = i * 2; j < MAX; j += i)
		f[j] += i * phi[j / i];

	s[2] = f[2];

	for (int i = 3; i < MAX; i++)
		s[i] = s[i - 1] + f[i];

	int n;
	while (cin >> n && n)
		cout << s[n] << endl;
	return 0;
}