#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
bool cmp(string &a, string & b)
{
    return a + b > b + a;
}
 
int main()
{   
    bool first = true;
    int n;
    while(cin >> n)
    {
        if(!first)
            cout << endl;
        first = false;
         
        vector<string> s;
        while(n--)
        {
            string temp;
            cin >> temp;
            s.push_back(temp);
        }
        sort(s.begin(), s.end(), cmp);
         
        for(int i = 0; i < s.size(); i++)
            cout << s[i];
    }
    return 0;
}