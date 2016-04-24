#include<iostream>
 
using namespace std;
 
// primes < 100
int prime[25];
 
// factor decomposition 
int f[101][25];
 
void initialize()
{
    // temp prime table
    bool p[101];
     
    // initialize
    p[0] = false;
    p[1] = true;
    for (int i = 2; i < 101; i++)
        p[i] = true;
  
    int index = 0;
    for (int i = 2; i < 101; i++)
    if (p[i])
    {
        prime[index] = i;
        index++; 
        for (int j = i * 2; j < 101; j += i)
        p[j] = false;
    }
}
 
int main()
{
    //initialize
    initialize();
 
    for(int i = 2; i < 101; i++)
    {
        int temp = i;
        for(int j = 0; temp > 1;)
        {
            if(temp % prime[j] == 0)
            {
                f[i][j]++;
                temp /= prime[j];
            }
            else
                j++;
        }
    }
     
    //accumulate
    int dp[101][25];
    for(int i = 2; i < 101; i++)
    for(int j = 0; j < 25; j++)
    dp[i][j] = f[i][j] + dp[i - 1][j];
 
    int n;
    while(cin >> n && n)
    {
        printf("%3d! =", n);
        int index;
        for(index = 24; index > -1; index--)
        if(dp[n][index] != 0)
            break;
             
        //output
        for(int i = 0; i <= index; i++)
        {
            if(i > 0 && i % 15 == 0)
                printf("\n      ");
            printf("%3d", dp[n][i]);
        }
        cout << endl;
    }
    return 0;
}