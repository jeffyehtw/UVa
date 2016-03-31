#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    double n, p, k;
    while(cin >> n >> p)
        cout << fixed << setprecision(0) << pow(p, 1.0/n) << endl;
    return 0;
}