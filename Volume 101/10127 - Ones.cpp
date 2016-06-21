#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        int ans = 1;
        int rd = 1;
 
        while (rd % n)
        {
            ans++;
            rd = (rd * 10 + 1) % n;
        }
        cout << ans << endl;
    }
    return 0;
}
¤ÀÃş¡GOnline Judge,UV