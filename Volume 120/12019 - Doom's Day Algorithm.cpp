#include<iostream>
#include<string>
using namespace std;
int main()
{
    int month[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
     
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int m, d;
        cin >> m >> d;
        d+=5;
        d%=7;
        for(int j=1;j<m;j++)
        {
            d+=month[j]%7;
            d%=7;
        }
        for(int j=0;j<7;j++)
            if(j==d)
                cout << week[j] << endl;
    }
    return 0;
}