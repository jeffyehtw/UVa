#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x[500]={0}, m, y[3000];
        cin >> m;
        for(int j=0;j<m;j++)
            cin >> y[j];
        sort(y, y+m);
        for(int j=0;j<m;j++)
            x[i]+=sqrt((double)(y[j]-y[m/2])*(double)(y[j]-y[m/2]));
        cout << x[i] << endl;
    }
    return 0;
}