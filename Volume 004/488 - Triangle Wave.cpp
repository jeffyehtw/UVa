#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            if(i>0)
                cout << endl;
            int a, f;
            cin >> a >> f;
            for(int j=0;j<f;j++)
            {
                for(int k=1;k<a+1;k++)
                {
                    for(int l=0;l<k;l++)
                        cout << k;
                    cout << endl;
                }
                for(int k=0;k<a-1;k++)
                {
                    for(int l=0;l<a-1-k;l++)
                        cout << a-1-k;
                    cout << endl;
                }
                if(j<f-1)
                    cout << endl;
            }
        }
    }
    return 0;
}