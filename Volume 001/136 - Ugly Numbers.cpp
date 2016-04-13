#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    //ugly number table
    int u[1500] = { 1 };
 
    //index 2 3 5
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
 
    for (int i = 1; i < 1500; i++)
    {
        while (u[p2] * 2 <= u[i - 1])  p2++;
        while (u[p3] * 3 <= u[i - 1])  p3++;
        while (u[p5] * 5 <= u[i - 1])  p5++;
 
        u[i] = min(u[p2] * 2, u[p3] * 3);
        u[i] = min(u[i], u[p5] * 5);
    }
    printf("The 1500'th ugly number is %d.\n", u[1499]);
    return 0;
}