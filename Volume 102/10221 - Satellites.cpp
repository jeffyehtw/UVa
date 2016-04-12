#include<iostream>
#include<string>
#include<cmath>

#define PI 2 * acos(0.0)

using namespace std;

int main()
{
	double s, a;
	string u;

	while (cin >> s >> a >> u)
	{
		if (u == "min")
			a /= 60;
		if (a > 180)
			a = 360 - a;

		double arc = 2;
		arc *= PI * (s + 6440);
		arc *= a / 360;

		double chord = s + 6440;
		chord *= sin(a * PI / 2 / 180);
		chord *= 2;

		printf("%.6lf %.6lf\n", arc, chord);
	}
	return 0;
}