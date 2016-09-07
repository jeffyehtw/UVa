#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin >> a >> b;
            int x, y;
            if((a+b)/2<0 || (a-b)/2<0 ||  (a+b)/2+(a-b)/2!=a)
                cout << "impossible" << endl;
            else
                cout << (a+b)/2 << " " << (a-b)/2 << endl;
        }
    }
    return 0;
}