#include<iostream>
#include<vector>
 
#define MAX 60001
 
using namespace std;
 
int table[MAX];
 
int main()
{
    //initialize
    for(int i = 2; i < MAX; i++)
    {
        int temp = 0;
        for(int j = 1; j * j <= i; j++)
        if(i % j == 0)
        {
            temp += j;
            if(j != i / j && i / j < i)
                temp += i / j;
        }
         
        if(temp < i)
            table[i] = 1;
        else if(temp == i)
            table[i] = 2;
        else
            table[i] = 3; 
    }
    table[1] = 1;
 
    int n;
    vector<int> in;
    while(cin >> n && n > 0)
        in.push_back(n);
     
    cout << "PERFECTION OUTPUT\n";
    for(int i = 0; i < in.size(); i++)
    {
        printf("%5d  ", in[i]);
         
        if(table[in[i]] == 1)
            cout << "DEFICIENT";
        else if(table[in[i]] == 2)
            cout << "PERFECT";
        else
            cout << "ABUNDANT";
        cout << endl;
    }
    cout << "END OF OUTPUT\n";
    return 0;
} 