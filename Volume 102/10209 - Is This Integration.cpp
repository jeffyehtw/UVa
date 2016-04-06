#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 2.0*acos(0.0)
using namespace std;
int main()
{
    double n;
    while(cin >> n)
    {
        double x, y, z;
        x=(1.0*PI/3-sqrt(3.0)+1)*n*n;
        y=(1.0*PI/12+(1.0*sqrt(3.0)/2)-1)*n*n;
        z=(1-1.0*PI/6-(1.0*sqrt(3.0)/4))*n*n;
        cout << fixed << setprecision(3) << x;
        cout << " " << 4*y << " " << 4*z << endl;
    }
    return 0;
}