#include<iostream>
#include<string>
 
using namespace std;
 
int toDecimal(string s)
{
    int sum = 0;
    int exp = 2;
    int last = s.length() - 1;
    for(int i = 0; i < s.length(); i++)
    {
        sum += (s[last - i] - '0') * exp;
        exp *= 2;
    }       
    return sum; 
}
 
int fixSkew(string s)
{
    int sum = 0;
    for(int i = 0; i < s.length(); i++)
        sum += s[i] - '0';
    return sum;
}
 
int main()
{
    string s;
    while(cin >> s && s != "0")
    {
        int ans = toDecimal(s);
        ans -= fixSkew(s);
        cout << ans << endl;
    }
    return 0;
}