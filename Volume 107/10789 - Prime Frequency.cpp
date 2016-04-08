#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool prime(int n)
{
    if(n==0 || n==1)
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
    int t;
    while(cin >> t && t>1 && t<201)
    {
        for(int i=0;i<t;i++)
        {
            int num[10]={0}, upperEng[26]={0},
                lowerEng[26]={0};
 
            string s; cin >> s;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]<='9')
                    for(int k=0;k<10;k++)
                        if(s[j]=='0'+k)
                            num[k]++;
 
                if(s[j]>'9' && s[j]<='Z')
                    for(int k=0;k<26;k++)
                        if(s[j]=='A'+k)
                            upperEng[k]++;
 
                if(s[j]>='a' && s[j]<='z')
                    for(int k=0;k<26;k++)
                        if(s[j]=='a'+k)
                            lowerEng[k]++;
            }
 
            //output
            cout << "Case " << i+1 << ": ";
            int check=0;
            for(int j=0;j<10;j++)
            {
                if(prime(num[j]))
                {
                    cout << (char)('0'+j);
                    check++;
                }
            }
 
            for(int j=0;j<26;j++)
            {
                if(prime(upperEng[j]))
                {
                    cout << (char)('A'+j);
                    check++;
                }
            }
 
            for(int j=0;j<26;j++)
            {
                if(prime(lowerEng[j]))
                {
                    cout << (char)('a'+j);
                    check++;
                }
            }
            if(check==0)
                cout << "empty";
            cout << endl;
        }
    }
    return 0;
}