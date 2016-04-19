#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    char c[3] = { 'B', 'C', 'G' };
     
    //initialize 
    int index = 1;
    int per[6][3];
    per[0][0] = 0;
    per[0][1] = 1;
    per[0][2] = 2;
     
    int t[3] = { 0, 1, 2 };
    while(next_permutation(t, t + 3))
    {
        for(int i = 0; i < 3; i++)
        per[index][i] = t[i];
        index++;
    }
     
    //brown, clear, green
    int bin[3][3];
    while(cin >> bin[0][0]
    >> bin[0][2] >> bin[0][1])
    {
        //input
        for(int i = 1; i < 3; i++)
        {
            cin >> bin[i][0];
            cin >> bin[i][2];
            cin >> bin[i][1];
        }
         
        //sum of bottles
        int sum = 0;
        for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            sum += bin[i][j];
         
        int ans = 5;
        int max = 0; 
        for(int i = 0; i < 6; i++)
        {
            int temp = 0;
            for(int j = 0; j < 3; j++)
                temp += bin[j][per[i][j]];
             
            if(max < temp)
            {
                max = temp;
                ans = i;
            }
        }
         
        //output
        for(int i = 0; i < 3; i++)
            cout << c[per[ans][i]];
        cout << " ";
        cout << sum - max << endl;
    }
    return 0;
}