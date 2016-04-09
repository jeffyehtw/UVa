#include<iostream>
using namespace std;
int main()
{   
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        long long x[100];
        x[0]=1;
        x[1]=1;
        for(int i=2;i<n+1;i++)
            x[i]=x[i-1]+x[i-2];
        cout << x[n] << endl;
    }
    return 0;   
}