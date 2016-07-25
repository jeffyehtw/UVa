#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int x[3000];
		for (int i = 0; i<3000; i++)
		{
			char c;
			cin >> x[i];
			cin.get(c);
			if (c == '\n')
				break;
		}
		int y[3000];
		for (int i = 0; i<n - 1; i++)
			y[i] = abs(x[i + 1] - x[i]);
		int count = 0;
		sort(y, y + n - 1);
		for (int i = 0; i<n - 1; i++)
		if (y[i] == i + 1)
			count++;
		if (count == n - 1)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	return 0;
}