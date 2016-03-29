#include<iostream>
#include<cmath>

#define MAX 100001

using namespace std;

int main()
{
	//initialize
	bool table[MAX];

	for (int i = 0; i < MAX; i++)
		table[i] = false;
	for (int i = 1; i < pow(MAX, 0.5); i++)
		table[i * i] = true;

	int n, m;

	while (cin >> n >> m)
	{
		if (!n && !m)
			break;

		int count = 0;
		
		for (int i = n; i < m + 1; i++)
			if (table[i])
				count++;
		printf("%d\n", count);
	}
	return 0;
}