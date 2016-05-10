#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n<=100)
    {
        for(int i=0;i<n;i++)
        {
            double c, d;
            cin >> c >> d;
            cout << "Case " << i+1 << ": ";
            cout << fixed << setprecision(2)
                 << ((c*9/5)+d)*5/9 << endl;
        }
    }
    return 0;
}