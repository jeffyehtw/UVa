#include<iostream>
 
#define MAX 7500
  
using namespace std;
  
int main()
{
    long long coin[5] = {
        1, 5, 10, 25, 50
    };
  
    //intialize
    long long dp[MAX] = { 1 };
    for (int i = 0; i < 5; i++)
    for (int j = coin[i]; j < MAX; j++)
        dp[j] += dp[j - coin[i]];
         
    int n;
    while (cin >> n)
    printf("%lld\n", dp[n]);
    return 0; 
}