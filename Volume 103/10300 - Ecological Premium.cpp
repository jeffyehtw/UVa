#include<iostream>
using namespace std; 
int main()
{
    int n;
    while(cin >> n && n<20)
    {
        while(n--)
        {
            int f;
            //area, amount, level
            double farmer[20][3];
            cin >> f;
            for(int i=0;i<f;i++)
                for(int j=0;j<3;j++)
                    cin >> farmer[i][j];
            int sum=0;
            for(int i=0;i<f;i++)
                sum+=farmer[i][2]*farmer[i][0];
            cout << sum << endl;
        }
    }
    return 0;
}