#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //input
    int n;
    cin >> n;
    long long x[3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            cin >> x[j];  
        cout << "Case " << i+1 << ": ";
        if(x[0]+x[1]>x[2]&&x[1]+x[2]>x[0]&&x[2]+x[0]>x[1])
        {
            if(x[0]==x[1] && x[1]==x[2])
                cout << "Equilateral" << endl;
            else if(x[0]==x[1]||x[1]==x[2]||x[2]==x[0])
                cout << "Isosceles" << endl;
            else
                cout << "Scalene" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}