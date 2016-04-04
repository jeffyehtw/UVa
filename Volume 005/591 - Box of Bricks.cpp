#include<iostream>
using namespace std;
int main()
{
    int n, m=1;
    while(cin >> n && n!=0)
    {
        int x[50];
        for(int i=0;i<n;i++)
            cin >> x[i];
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=x[i];
        int average=sum/n, min=0;
        for(int i=0;i<n;i++)
            if(x[i]-average>0)
                min+=x[i]-average;
        cout << "Set #" << m << endl;
        cout << "The minimum number of moves is ";
        cout << min << "." << endl << endl;
        m++;
    }
    return 0;
}