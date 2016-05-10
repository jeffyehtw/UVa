#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            long x, y;
            cin >> x >> y;
            if(x==y)
                cout << "=" << endl;
            if(x>y)
                cout << ">" << endl;
            if(x<y)
                cout << "<" << endl;
        }
    }
    return 0;
}