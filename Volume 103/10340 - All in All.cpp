#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x, y;
    while(cin >> x >> y)
    {
        int index=0;
        for(int i=0;i<y.length();i++)
        {
            if(index==x.length())
                break;
            if(y[i]==x[index])
                index++;
        }
        if(index==x.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}