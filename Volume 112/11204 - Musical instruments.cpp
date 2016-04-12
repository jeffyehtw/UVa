#include<iostream>
using namespace std;
int main()
{
    int r;
    while(cin >> r)
    {
        while(r--)
        {
            int n; //student
            int m; //instrument
            cin >> n >> m;
            int stu[32][32];
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    cin >> stu[i][j];
            //calculate repeat
            int num[32]={0};
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    if(stu[i][j]==1)
                        num[j]++;
            int ans=1;
            for(int i=0;i<n;i++)
                if(num[i]>1)
                    ans*=num[i];
            cout << ans << endl;
        }
    }
    return 0;
}