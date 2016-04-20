#include<iostream>
 
using namespace std;
 
int main()
{
    long long n;
    while(cin >> n && n > -1)
    {
        long long a = 0;
        long long b = 1;
         
        for(int i = 0; i < n; i++)
        {
            //male, female
            long long aa = a + b;
            long long bb = a + 1;
            a = aa;
            b = bb;
        }
        printf("%lld %lld\n", a, a + b);
    }
    return 0;   
} 