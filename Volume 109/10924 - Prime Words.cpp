#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool prime(int n)
{
    if(n==0)
        return 0;
  
    bool judge=true;
    for(int i=2;i<=pow(n, 0.5);i++)
    {
        if(n%i==0)
        {
            judge=false;
            break;
        }
    }
    return judge;
}
int main()
{
    string s;
    while(cin >> s)
    {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<26;j++)
            {
                if(s[i]=='a'+j)
                    sum+=j+1;
                else if(s[i]=='A'+j)
                    sum+=j+27;
            }
        }
        if(prime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
    return 0;
}