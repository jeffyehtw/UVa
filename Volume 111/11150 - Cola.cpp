#include<iostream>
using namespace std;
int Cola(int n)
{
    int cola = n;
    while(n>2)
    {
        cola+=n/3;
        n=n%3+n/3;
    }
    return cola;
}
int main()
{
    int n;
    while(cin >> n && n)
    {
        int x, y;
        //method 1
        x = Cola(n);
        //method 2 : -1 for borrow
        y = Cola(n+1) - 1;
 
        if(x>y) cout << x << endl;
        else cout << y << endl;
    }
    return 0;
}