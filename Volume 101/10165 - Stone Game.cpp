#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n && n)
    {
        int ans = 0;
 
        while (n--)
        {
            int temp; cin >> temp;
            //XOR
            ans ^= temp;
        }
 
        if (ans)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}