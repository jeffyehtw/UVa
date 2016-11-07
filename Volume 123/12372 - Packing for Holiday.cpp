#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    for(int i = 1; i <= n; i++)
    {
        int L, W, H;
        cin >> L >> W >> H;
         
        cout << "Case " << i;
        cout << ": ";
         
        if(L <= 20 && W <= 20 && H <= 20)
            cout << "good\n";
        else
            cout << "bad\n";
    }
    return 0;
}