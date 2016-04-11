#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int x[26]={0}, y[26];
        string s[100];
        cin.get();
        for(int i=0;i<n;i++)
            getline(cin,s[i]);
        for(int i=0;i<n;i++)
            for(int j=0;j<s[i].length();j++)
                for(int k=0;k<26;k++)
                    if(s[i][j]=='a'+k || s[i][j]=='A'+k)
                        x[k]++;
        for(int i=0;i<26;i++)
            y[i]=i;
        for(int i=0;i<26;i++)
            for(int j=0;j<26;j++)
            {
                if(x[i]>x[j])
                {
                    int temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                    temp=y[i];
                    y[i]=y[j];
                    y[j]=temp;
                }
                else if(x[i]==x[j] && y[j]>y[i])
                {
                    int temp=y[i];
                    y[i]=y[j];
                    y[j]=temp;
                }
            }
        for(int i=0;i<26;i++)    
            if(x[i]>0)
                cout << (char)(y[i]+'A') << " " << x[i] << endl;
    }
    return 0;
}