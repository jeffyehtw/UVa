#include<iostream>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
        cout << 3*((n+1)/2*(1+n))-9 << endl;
    return 0;
}