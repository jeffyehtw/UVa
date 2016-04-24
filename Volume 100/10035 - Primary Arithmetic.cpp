#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned int x, y;
    while(cin >> x >> y)
    {
        if(x==0 && y==0)
            break;
        int n=0;
        for(int i=0;i<10;i++)
            if(x%(int)pow(10.0, i+1)+y%(int)pow(10.0, i+1)>=pow(10.0, i+1))
                n++;
        if(n==0)
            cout << "No carry operation." << endl;
        else if(n==1)
            cout << n << " carry operation." << endl;
        else
            cout << n << " carry operations." << endl;
    }
    return 0;
}