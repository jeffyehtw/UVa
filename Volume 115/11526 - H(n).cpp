#include<iostream>
#include<cmath>
 
using namespace std;
 
long long H(int n)
{
    long long sum = 0;
    long long m = sqrt(n);
 
    for (int i = 1; i < m + 1; i++) 
        sum += n / i;
 
    return (sum * 2) - m * m;
}
 
int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            int temp; cin >> temp;
            cout << H(temp) << endl;
        }
    }
    return 0;
}