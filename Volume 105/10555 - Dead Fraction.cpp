#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<climits>
 
using namespace std;
 
int gcd(int x, int y)
{
    while (x %= y)
        swap(x, y);
    return y;
}
 
int main()
{
    string s;
    while (cin >> s && s != "0")
    {
        //remove 0.
        s = s.substr(2);
        //remove ...
        s = s.substr(0, s.length() - 3);
         
        int num = stoi(s);
        int last = s.length() - 1;
 
        //ans
        int x = INT_MAX;
        int y = INT_MAX;
 
        // a = num - b
        // ans = a / c
        for (int i = 0; i < s.length(); i++)
        {
            int b = 0;
            if (last - i)
                b = stoi(s.substr(0, last - i));
            int a = num - b;
 
            int c = pow(10, (i + 1)) - 1;
            c *= pow(10, last - i);
 
            int g = gcd(a, c);
 
            a /= g;
            c /= g;
 
            if (c < y)
            {
                x = a;
                y = c;
            }
        }
        printf("%d/%d\n", x, y);
    }
    return 0;
}