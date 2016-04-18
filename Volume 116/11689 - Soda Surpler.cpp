#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        while(n--)
        {
            int e, f, c;
            int soda=0;
            cin >> e >> f >> c;
            e+=f;
            while(e>=c)
            {
                e-=c;
                e++;
                soda++;
            }
            cout << soda << endl;
        }       
    }
    return 0;
}