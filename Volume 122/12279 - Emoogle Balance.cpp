#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    int caseIndex = 1;
    while(cin >> n && n)
    {
        int balance = 0;
        while(n--)
        {
            int t; cin >> t;
            if(t >= 1 && t <= 99)
                balance++;
            else
                balance--; 
        }
        cout << "Case " << caseIndex++;
        cout << ": " << balance << endl;
    }
    return 0;
}