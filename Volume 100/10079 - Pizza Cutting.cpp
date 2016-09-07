#include<iostream>
 
#define MAX 210000001
 
using namespace std;
 
long long dp[MAX];
 
int main()
{
    //initialize
    dp[0] = 1;
    for(int i = 1; i < MAX; i++)     
        dp[i] = dp[i - 1] + i;
         
    int n;
    while(cin >> n && n > -1)
    cout << dp[n] << endl;
    return 0;
}