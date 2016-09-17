#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n>0)
    {
        while(n/10)
            n=n/10+n%10;
        cout << n << endl;
    }
    return 0;
}