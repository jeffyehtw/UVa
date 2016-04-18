#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x, y, r = 1;
    while(cin >> y >> x && x && y)
    {
        if(r > 1) puts("");
        //initial
        char mine[105][105];
        int num[105][105];
        for(int i=0;i<105;i++)
        {
            for(int j=0;j<105;j++)
            {
                mine[i][j] = ' ';
                num[i][j] = 0;
            }
        }
 
        //input
        cin.get();
        for(int i=1;i<y+1;i++)
        {
            for(int j=1;j<x+1;j++)
            {
                char c; cin.get(c);
                mine[i][j] = c;
            }
            cin.get(); // \n
        }
 
        //count
        for(int i=1;i<y+1;i++)
        {
            for(int j=1;j<x+1;j++)
            {
                if(mine[i][j]=='.')
                {
                    for(int k=0;k<3;k++)
                    { 
                        if(mine[i-1][j-1+k]=='*')
                            num[i][j]++;
                        if(mine[i][j-1+k]=='*')
                            num[i][j]++;
                        if(mine[i+1][j-1+k]=='*')
                            num[i][j]++;
                    }
                }
            }
        }
 
        //output
        cout << "Field #" << r << ":" << endl;
        for(int i=1;i<y+1;i++)
        {
            for(int j=1;j<x+1;j++)
            {
                if(mine[i][j]=='*') cout << '*';
                else cout << num[i][j];
            }
            puts("");
        }
        r++;
    }
    return 0;
}       