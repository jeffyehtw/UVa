#include<iostream>
#include<string>
using namespace std;
int f(int num)
{
    int length=0;
    while(num)
    {
        num/=10;
        length++;
    }
    return length;
}
int main()
{
    string s;
    while(cin >> s && !(s=="END"))
    {
        int length=s.length();
        int n=1;
        while(length>1)
        {
            length=f(length);
            n++;
        }
        if(s=="1")
            n--;
        cout << n+1 << endl;
    }
    return 0;
}