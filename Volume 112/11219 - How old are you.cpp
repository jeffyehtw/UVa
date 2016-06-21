#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            int d[2], m[2], y[2];
            //input
            for(int j=0;j<2;j++)
            {
                cin >> d[j]; cin.get();
                cin >> m[j]; cin.get();
                cin >> y[j];
            }
            int age;
            cout << "Case #" << i+1 << ": ";
            if(m[1]>m[0] || (m[1]==m[0] && d[0]<d[1]))
                age=y[0]-y[1]-1;
            else
                age=y[0]-y[1];
 
            //output
            if(age<0)
                cout << "Invalid birth date" << endl;
            else if(age>130)
                cout << "Check birth date" << endl;
            else
                cout << age << endl;    
        }
    }
    return 0;
}