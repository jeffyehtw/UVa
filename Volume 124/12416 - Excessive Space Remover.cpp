#include<iostream>
#include<string>
using namespace std;
int f(int max)
{
    int r=max%2;
    int q=max/2;
    return q+r;
}
int main()
{
    string s;
    while(getline(cin, s))
    {
        int index, max=0;
        for(index=0;index<s.length();index++)
        {
            int count=0;
            if(s[index]==' ')
            {
                for(int j=index;j<s.length();j++, index++)
                {
                    if(s[j]!=' ')
                        break;
                    count++;
                }
            }
            if(count>max)
                max=count;
        }
        int round=0;
        while(max!=1)
        {
            max=f(max);
            round++;
        }
        cout << round << endl;
    }
    return 0;
}