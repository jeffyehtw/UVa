#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x[10][2], y[10][2], z[10]={0};
    int n; //amount of square
    for(n=0;n<10;n++)
    {
        char c;
        cin.get(c);
        if(c=='*')
            break;
        if(c=='r')
            for(int i=0;i<2;i++)
                cin >> x[n][i] >> y[n][i];          
        else if(c=='c')
            cin >> x[n][0] >> y[n][0] >> z[n];
        cin.get();
    }
    cin.get();
    double a, b;
    int p=1; //point
    while(cin >> a >> b && !(a==9999.9 && b==9999.9))
    {
        int count=0;
        for(int i=0;i<n;i++)
            if((a>x[i][0] && a<x[i][1]) && (b>y[i][1] && b<y[i][0]) || sqrt(pow(a-x[i][0], 2.0)+pow(b-y[i][0], 2.))<z[i])
            {
                cout << "Point " << p << " is contained in figure " << i+1 << endl;
                count++;
            }
        if(count==0)
                cout << "Point " << p << " is not contained in any figure" << endl;
        p++;
    }
    return 0;
}       