#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x[2], y[2];
    while(cin >> x[0] >> y[0] >> x[1] >> y[1])
    {
        if(x[0]==0 && x[1]==0 && y[1]==0 && y[0]==0)
            break;
 
        if(x[0]==x[1] && y[0]==y[1])
            cout << "0" << endl;
        else if(abs(x[0]-x[1])==abs(y[0]-y[1]) || x[0]==x[1] || y[0]==y[1])
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}