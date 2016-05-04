#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		//input
		double avg = 0;
		vector<double> money;

		for (int i = 0; i < n; i++)
		{
			double temp; cin >> temp;
			money.push_back(temp * 100);
			avg += temp * 100;
		}
		avg /= n;

		//divide
		double upper = 0;
		double lower = 0;
		for (int i = 0; i < n; i++)
		{
			if (money[i] > avg)
				upper += floor(money[i] - avg);
			else
				lower += floor(avg - money[i]);
		}
		printf("$%.2lf\n", max(upper, lower) / 100);
	}
	return 0;
}