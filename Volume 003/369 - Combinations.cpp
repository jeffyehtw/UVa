#include<iostream>
  
#define MAX 101
  
using namespace std;
  
int main()
{
    long long data[MAX][MAX];
  
    for (int i = 0; i < MAX; i++)
    {
        data[0][i] = 0;
        data[i][0] = 1;
    }
  
    for (int i = 1; i < MAX; i++)
    {
        for (int j = 1; j < MAX; j++)
        {
            data[j][i] = 0;
            data[j][i] += data[j - 1][i - 1];
            data[j][i] += data[j - 1][i];
        }
    }
  
    int n, r;
    while(cin >> n >> r)
    {
        if(!n && !r)
            break;
         
        printf("%d things taken ", n);
        printf("%d at a time is ", r);
        printf("%d exactly.\n", data[n][r]);
    }
    return 0;
}