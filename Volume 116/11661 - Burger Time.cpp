#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
bool Z(string s)
{
    for(int i=0;i<s.length();i++)
        if(s[i]=='Z')
            return 1;
    return 0;
}
int main()
{
    int n;
    while(cin >> n && n)
    {
        cin.get();
        string s; getline(cin, s);
        if(Z(s))
            cout << "0" << endl;
        else
        {
            vector<int> d;
            vector<int> r;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='D')
                    d.push_back(i);
                else if(s[i]=='R')
                    r.push_back(i);
            }
            sort(d.begin(), d.end());
            sort(r.begin(), r.end());
            int min=s.length()+1;
            for(int i=0;i<d.size();i++)
                for(int j=0;j<r.size();j++)
                    if(abs(d[i]-r[j])<min)
                        min=abs(d[i]-r[j]);
            cout << min << endl;
        }
    }
    return 0;
}