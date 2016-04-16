#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    while(cin >> t && t && t<101)
    {
        int n;
        while(cin >> n && n && n<21)
        {
            //input
            int shop[20];
            for(int i=0;i<n;i++)
                cin >> shop[i];
 
            sort(shop, shop+n);
            cout << 2*(shop[n-1]-shop[0])
                 << endl;
        }
    }
    return 0;
}