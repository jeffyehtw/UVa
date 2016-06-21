#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Point
{
    public:
        Point(double x_value, double y_value)
        {
            x=x_value; 
            y=y_value;
        }       
        Point() {}
        ~Point() {}
        double x, y;
};
bool inside(int r, Point p)
{
    Point circle[4]={Point(0,0), Point(0,r),
                     Point(r,0), Point(r,r)};
    int count=0;
    for(int i=0;i<4;i++)
    {
        double x=pow(p.x-circle[i].x, 2.0);
        double y=pow(p.y-circle[i].y, 2.0);
        if(x+y<=r*r)
            count++;
    }
    if(count==4)
        return 1;
    return 0;
}
int main()
{
    int n, a;
    while(cin >> n >> a && (a>=10 && a<=100) && n)
    {
        int m=0;
        for(int i=0;i<n;i++)
        {
            double x; cin >> x;
            double y; cin >> y;
            if(inside(a, Point(x,y)))
                m++;
        }
        cout << fixed << setprecision(5);
        cout << ((double)m/(double)n)*(double)a*(double)a
             << endl;
    }
    return 0;
}