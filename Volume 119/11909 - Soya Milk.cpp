#include<iostream>
#include<cmath>
 
#define PI atan(1)*4
 
using namespace std;
 
int main()
{
    double l, w, h, a;
    while(cin >> l >> w >> h >> a)
    {   
        double v = l * w * h;
        double r = a * PI / 180;
        double ans;
         
        if(tan(r) < h / l)
        {
            double temp;
            temp = l * l * w;
            temp *= tan(r) / 2;
            ans = v - temp;
        }
        else
        {
            ans = h * h * w;
            ans /= tan(r);
            ans /= 2;
        }
         
        printf("%.3lf mL\n", ans);
    }   
    return 0;
} 