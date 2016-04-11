#include<iostream>
using namespace std;
int main()
{
    long n;
    while(cin >> n && n>0)
    {
        if(n==1)
            cout << "0%" << endl;
        else
            cout << n*25 << "%" << endl;
    }
    return 0;
}