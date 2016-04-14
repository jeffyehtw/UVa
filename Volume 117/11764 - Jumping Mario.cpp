#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n<50)
    {
        for(int i=0;i<n;i++)
        {
            int high=0, low=0, input[50], m;
            cin >> m; //input amount
            for(int j=0;j<m;j++)
                cin >> input[j];
            for(int j=0;j<m-1;j++)
            {
                if(input[j+1]>input[j])
                    high++;
                else if(input[j+1]<input[j])
                    low++;
            }
            cout << "Case " << i+1 << ": "
                 << high << " " << low << endl;
        }
    }
    return 0;
}