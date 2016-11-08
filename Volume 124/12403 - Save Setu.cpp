#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        int account = 0;
        while(n--)
        {
            string s; cin >> s;
             
            if(s == "donate")
            {
                int m; cin >> m;
                account += m;
            }   
            else if(s == "report")
                cout << account << endl;
        }
    }
    return 0;
}