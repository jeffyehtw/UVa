#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class point
{
public:
	point() {}
	point(double a, double b)
		:x(a), y(b) {}
	double x;
	double y;
};

class circle
{
public:
	circle() {}
	circle(point x, double y)
		:center(x), r(y) {}
	point center;
	double r;
};

class rectangle
{
public:
	rectangle() {}
	rectangle(point var[])
	{
		p[0] = var[0];
		p[1] = var[1];
	}
	point p[2];
};

class triangle
{
public:
	triangle() {}
	triangle(point var[])
	{
		for (int i = 0; i < 3; i++)
			p[i] = var[i];
	}
	point p[3];
};

bool inCircle(circle a, point b)
{
	double temp = 0;
	temp += pow(a.center.x - b.x, 2.0);
	temp += pow(a.center.y - b.y, 2.0);

	return a.r * a.r > temp;
}

double Heron(point a, point b, point c)
{
	double e1 = pow(a.x - b.x, 2.0);
	e1 += pow(a.y - b.y, 2.0);
	e1 = sqrt(e1);

	double e2 = pow(a.x - c.x, 2.0);
	e2 += pow(a.y - c.y, 2.0);
	e2 = sqrt(e2);

	double e3 = pow(b.x - c.x, 2.0);
	e3 += pow(b.y - c.y, 2.0);
	e3 = sqrt(e3);

	double s = e1 + e2 + e3;
	s /= 2;

	double ans = s;
	ans *= (s - e1);
	ans *= (s - e2);
	ans *= (s - e3);

	return sqrt(ans);
}

bool inTriangle(triangle a, point b)
{
	double t1 = Heron(a.p[0], a.p[1], b);
	double t2 = Heron(a.p[1], a.p[2], b);
	double t3 = Heron(a.p[0], a.p[2], b);

	double tt = Heron(a.p[0], a.p[1], a.p[2]);

	return t1 + t2 + t3 - tt < 0.00001;
}

bool inRectangle(rectangle a, point b)
{
	return a.p[0].x < b.x
		&& a.p[0].y < b.y
		&& a.p[1].x > b.x
		&& a.p[1].y > b.y;
}

int main()
{
	//variables
	vector<char> figure;

	vector<circle> cir;
	vector<triangle> tri;
	vector<rectangle> rec;

	//input graph
	char c;
	while (cin >> c && c != '*')
	{
		figure.push_back(c);

		if (c == 'r')
		{
			point t[2];
			cin >> t[0].x >> t[1].y;
			cin >> t[1].x >> t[0].y;

			rec.push_back(rectangle(t));
		}
		else if (c == 'c')
		{
			point t;
			double r;
			cin >> t.x >> t.y;
			cin >> r;

			cir.push_back(circle(t, r));
		}
		else if (c == 't')
		{
			point t[3];
			for (int i = 0; i < 3; i++)
				cin >> t[i].x >> t[i].y;

			tri.push_back(triangle(t));
		}
	}

	//input query
	point p;
	int counter = 1;
	while (cin >> p.x >> p.y)
	{
		if (p.x == 9999.9 && p.y == 9999.9)
			break;

		//index
		int indexOfcir = 0;
		int indexOftri = 0;
		int indexOfrec = 0;

		bool print = false;

		//output
		for (int i = 0; i < figure.size(); i++)
		{
			if (((figure[i] == 'c')
				&& inCircle(cir[indexOfcir], p))
				|| ((figure[i] == 't')
				&& inTriangle(tri[indexOftri], p))
				|| ((figure[i] == 'r')
				&& inRectangle(rec[indexOfrec], p)))
			{
				printf("Point %d is ", counter);
				printf("contained in figure %d\n", i + 1);
				print = true;
			}

			if (figure[i] == 'c')
				indexOfcir++;
			else if (figure[i] == 't')
				indexOftri++;
			else if (figure[i] == 'r')
				indexOfrec++;
		}

		if (!print)
		{
			printf("Point %d is ", counter);
			printf("not contained in any figure\n");
		}

		counter++;
	}
	return 0;
}