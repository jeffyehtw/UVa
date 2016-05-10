#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        int a, b;
        cin >> a >> b;
        if(a==-1 && b==-1)
            break;
        if(a>b)
        {
            if(100-a+b<a-b)
                cout << 100-a+b << endl;
            else
                cout << a-b << endl;
        }
        else
        {
            if(100-b+a<b-a)
                cout << 100-b+a << endl;
            else
                cout << b-a << endl;
        }
    }
    return 0;
}