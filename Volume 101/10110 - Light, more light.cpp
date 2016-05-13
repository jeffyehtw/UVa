#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    double n;
    while(cin >> n && n)
    {
        double t = pow(n, 0.5);
        if(t == floor(t))
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}