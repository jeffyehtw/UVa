#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
    int c;
    while(cin >> c && c<=1000 && c>=1)
    {
        while(c--)
        {
            //input
            int n, grade[1000];
            cin >> n;
            for(int i=0;i<n;i++)
                cin >> grade[i];
            //average
            int average, sum=0;
            for(int i=0;i<n;i++)
                sum+=grade[i];
            average=sum/n;
            //percentage
            double count=0;
            for(int i=0;i<n;i++)
                if(grade[i]>average)
                    count++;
            cout << fixed <<setprecision(3) << 100*count/n << "%" << endl;
        }
    }
    return 0;
}