#include<iostream>  

using namespace std;

int main()
{
	double h, u, d, p;
	while (cin >> h >> u >> d >> p)
	{
		if (h == 0 && u == 0 
			&& d == 0 && p == 0) 
			break;

		double current = 0;
		for (int i = 0;; i++)
		{
			//day
			if (100 - i * p > 0)
			current += u * (100 - i * p) / 100;

			if (current > h)
			{
				printf("success on day %d\n", i + 1);
				break;
			}

			//night
			current -= d;

			if (current < 0)
			{
				printf("failure on day %d\n", i + 1);
				break;
			}
		}
	}
	return 0;
}