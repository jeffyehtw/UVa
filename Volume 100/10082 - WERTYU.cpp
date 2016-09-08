#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, data="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin, s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='Q' || s[i]=='A' || s[i]=='Z' || s[i]==' ' || s[i]=='`')
                    cout << s[i];
            else
                for(int j=0;j<data.length();j++)
                    if(s[i]==data[j])
                        cout << data[j-1];
        }
        cout << endl;
    }
    return 0;
}