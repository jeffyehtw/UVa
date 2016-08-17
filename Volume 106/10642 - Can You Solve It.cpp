#include<iostream>

using namespace std;

class Point
{
	public:
		Point(int a, int b)
			:x(a), y(b) {}
		Point() {}
		int x, y;
};

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
		{
			Point p1, p2;
			int tmp1, tmp2;
			
			cin >> tmp1 >> tmp2;
			p1 = Point(tmp1, tmp2);

			cin >> tmp1 >> tmp2;
			p2 = Point(tmp1, tmp2);

			int pos1 = p1.x + p1.y + 1;
			pos1 *= p1.x + p1.y;
			pos1 /= 2;
			pos1 += p1.x;

			int pos2 = p2.x + p2.y + 1;
			pos2 *= p2.x + p2.y;
			pos2 /= 2;
			pos2 += p2.x;

			cout << "Case " << i << ": ";
			cout << pos2 - pos1 << endl;
		}
	}
	return 0;
}