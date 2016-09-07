#include<iostream>
 
using namespace std;
 
int main()
{
    long long dp[31];
    for (int i = 0; i < 31; i++)
        dp[i] = 0;
    dp[0] = 1;
    dp[2] = 3;
    for (int i = 4; i < 31; i += 2)
    dp[i] = dp[i - 2] * 4 - dp[i - 4];
     
    int n;
    while (cin >> n && n > -1)
    cout << dp[n] << endl;
    return 0;
}