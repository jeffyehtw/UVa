#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
 
#define MAX 255
 
using namespace std;
 
class obj
{
public:
    obj(string s)
    {
        for (int i = 0; i < s.length(); i++)
            bit[i] = s[s.length() - 1 - i] - '0';
        length = s.length();
    }
    int bit[MAX];
    int length;
};
 
int main()
{
    string s;
 
    while (getline(cin, s))
    {
        obj x(s);
 
        getline(cin, s);
        obj y(s);
 
        int ans[2 * MAX] = { 0 };
 
        for (int i = 0; i < x.length; i++)
        {
            for (int j = 0; j < y.length; j++)
            {
                ans[i + j] += x.bit[i] * y.bit[j];
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }
 
        int last = x.length + y.length;
 
        while (last > 1 && !ans[last - 1])
            last--;
 
        for (int i = 0; i < last; i++)
        {
            cout << ans[last - 1 - i];
        }
        cout << endl;
    }
    return 0;
}