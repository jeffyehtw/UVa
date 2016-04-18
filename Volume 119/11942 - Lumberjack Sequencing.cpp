#include<iostream>
using namespace std;
bool bigsmall(int beard[])
{
    int count=0;
    for(int i=0;i<9;i++)
        if(beard[i]>beard[i+1])
            count++;
    if(count==9)
        return 1;
    return 0;
}
bool smallbig(int beard[])
{
    int count=0;
    for(int i=0;i<9;i++)
        if(beard[i]<beard[i+1])
            count++;
    if(count==9)
        return 1;
    return 0;
}
int main()
{
    int n;
    while(cin >> n && (n>0 && n<20))
    {
        int round=0;
        while(n--)
        {
            int beard[10];
            for(int i=0;i<10;i++)
                cin >> beard[i];
            if(round==0)
                cout << "Lumberjacks:" << endl; 
            if(bigsmall(beard) || smallbig(beard))
                cout << "Ordered" << endl;
            else
                cout << "Unordered" << endl;
            round++;
        }
    }
    return 0;
}