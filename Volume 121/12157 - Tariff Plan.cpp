#include<iostream>
#include<algorithm>
 
using namespace std;
 
int getMile(int s)
{
    int ans = s / 30;
    if(s % 30 >= 0)
        ans++;
         
    return ans * 10;    
}
 
int getJuice(int s)
{
    int ans = s / 60;
    if(s % 60 >= 0)
        ans++;
     
    return ans * 15;
}
 
int main()
{
    int t;
    while(cin >> t)
    for(int i = 1; i <= t; i++)
    {
        int n; cin >> n;
         
        int mile = 0;
        int juice = 0;
        while(n--)
        {
            int t; cin >> t;
            mile += getMile(t);
            juice += getJuice(t);
        }
         
        //output
        cout << "Case " << i;
        cout << ":";
         
        int minimum = min(mile, juice);
         
        if(mile == minimum)
            cout << " Mile";
        if(juice == minimum)
            cout << " Juice";
        cout << " " << minimum << endl;       
    }
    return 0;
}