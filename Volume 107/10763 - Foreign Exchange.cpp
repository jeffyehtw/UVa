#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n && n)
    {
        vector<int> x, y;
        while (n--)
        {
            int a, b; cin >> a >> b;
 
            x.push_back(a);
            y.push_back(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
 
        bool found = 1;
        for (int i = 0; i < x.size();i++)
        {
            if (x[i] != y[i])
            {
                found = false;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}