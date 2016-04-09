#include<iostream>
#include<string>
using namespace std;
bool leapYear(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        return 1;
    return 0;
}
int main()
{
    int n;
    string month[12]={"January", "February", "March", 
                      "April", "May", "June", "July", 
                      "August", "September", "October", 
                      "November" , "December"};
    while(cin >> n && n<=500)
    {
        for(int k=0;k<n;k++)
        {
            //input
            int d[2], y[2], num_m[2];
            string m[2];
            for(int i=0;i<2;i++)
            {
                cin >> m[i] >> d[i];
                cin.get();
                cin >> y[i];
            }
            //transfer month to int
            for(int i=0;i<2;i++)
                for(int j=0;j<12;j++)
                    if(month[j]==m[i])
                            num_m[i]=j+1;
            int leap=0;
            //cal the num of leap year
            leap+=y[1]/4-y[1]/100+y[1]/400;
            leap-=y[0]/4-y[0]/100+y[0]/400;
            if(leapYear(y[0]) && num_m[0]<=2)
                leap++;
            if(leapYear(y[1]) && (num_m[1]==1 || (num_m[1]==2 && d[1]!=29)))
                leap--;
            cout << "Case " << k+1 << ": " << leap << endl;
        }
    }
    return 0;
}