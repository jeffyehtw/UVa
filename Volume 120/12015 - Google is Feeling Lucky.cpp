#include<iostream>
#include<string>
using namespace std;
int main()
{
    //input
    int n, m=1;
    cin >> n;
 
    while(n--)
    {
        //var
        string s[10];
        int rate[10];
        for(int i=0;i<10;i++)
            cin >> s[i] >> rate[i];
 
        //find max
        int max=0;
        for(int i=0;i<10;i++)
            if(rate[i]>max)
                max=rate[i];
 
        cout << "Case #" << m << ":" << endl;
        //check same rate
        for(int i=0;i<10;i++)
            if(rate[i]==max)
                cout <<  s[i] << endl;
        m++;
    }
    return 0;
}