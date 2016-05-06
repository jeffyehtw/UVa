#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int a, b, sum=0;
            cin >> a >> b;
            for(int i=a;i<=b;i++)
                if(i%2==1)
                    sum+=i;
            cout << "Case " << i+1 << ": ";
            cout << sum << endl;
        }
    }
    return 0;
}