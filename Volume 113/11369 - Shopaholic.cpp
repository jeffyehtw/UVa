#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n && n<20001)
    {
        while(n--)
        {
            //input
            int m; cin >> m;
            int price[20000];
            for(int i=0;i<m;i++)
                cin >> price[i];
 
            //sort
            sort(price, price+m);
 
            //calculate
            int sum=0;
            for(int i=1;i<m;i++)
            {
                if(m-3*i>=0)
                    sum+=price[m-3*i];
                else
                    break;
            }
            cout << sum << endl;
        }
    }
    return 0;
}