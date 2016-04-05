#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    //minute, hour
    double m, h; 
    char c;
    while(cin >> h >> c >> m)
    {
        if(h==0 && m==0)
            break;
        double degree_h=h*30+m*0.5;
        double degree_m=m*6;
        double angle=abs(degree_h-degree_m);
        if(angle>180)
            angle=360-angle;
        cout << fixed << setprecision(3) << angle << endl;
    }
    return 0;
}