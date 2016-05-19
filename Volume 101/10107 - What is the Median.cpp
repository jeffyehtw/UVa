#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x[10000], n=0;
    while(cin >> x[n])
    {
        sort(x, x+n+1);
        if(n==0)
            cout << x[n] << endl;
        else
        {           
            if(n%2==1 && n>0)
                cout << (x[n/2]+x[n/2+1])/2 << endl;
            else
                cout << x[n/2] << endl;
        }
        n++;
    }
    return 0;
}