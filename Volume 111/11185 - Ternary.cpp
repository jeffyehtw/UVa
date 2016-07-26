#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n>=0)
    {
        //initial var
        int num[20];
        for(int i=0;i<20;i++)
            num[i]==-1;
        int num_long=0;
        if(n==0)
            cout << "0" << endl;
        else
        {
            while(n)
            {
                num[19-num_long]=n%3;
                n/=3;
                num_long++;
            }
            for(int i=20-num_long;i<20;i++)
                    cout << num[i];
            cout << endl;
        }
    }
    return 0;
}