#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string num[3]={"one", "two", "three"};
    while(cin >> n)
    {
        while(n--)
        {
            string s;
            int check[3]={0};
            cin >> s;
            for(int i=0;i<3;i++)
                if(s.length()==num[i].length())
                    for(int j=0;j<s.length();j++)
                        if(s[j]==num[i][j])
                            check[i]++;
            for(int i=0;i<3;i++)
                if(s.length()==num[i].length() && check[i]>1)
                    cout << i+1 << endl;
        }
    }
    return 0;
}