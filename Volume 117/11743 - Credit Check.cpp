#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
    {
        while(n--)
        {
            cin.get();
            int sum=0;
            for(int i=0;i<4;i++)
            {
                string s; cin >> s;
                for(int j=0;j<4;j++)
                {
                    int num=s[j]-'0';
                    if(j%2==0)
                    {
                        num*=2;
                        sum+=num/10+num%10;
                    }
                    else
                        sum+=num;
                }
            }
            if(sum%10==0)
                cout << "Valid" << endl;
            else
                cout << "Invalid" << endl;
        }
    }
    return 0;
}