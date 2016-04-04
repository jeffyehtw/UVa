#include<iostream>
using namespace std;
int main()
{
    double x[10][2], y[10][2];
    int n; //amount of square
    for(n=0;n<10;n++)
    {
        char c;
        cin.get(c);
        if(c=='*')
            break;
        for(int i=0;i<2;i++)
            cin >> x[n][i] >> y[n][i];
        cin.get();
    }
    cin.get();
    double a, b;
    int p=1; //point
    while(cin >> a >> b && !(a==9999.9 && b==9999.9))
    {
        int count=0;
        for(int i=0;i<n;i++)
            if((a>x[i][0] && a<x[i][1]) && (b>y[i][1] && b<y[i][0]))
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