#include<iostream>
using namespace std;
bool judgeTriangle(int num[])
{
    if(num[0]+num[1]>num[2])
        if(num[1]+num[2]>num[0])
            if(num[2]+num[0]>num[1])
                return 1;
    return 0;
}
int main()
{
    int n;
    while(cin >> n && (n>=2 && n<=20))
    {
        while(n--)
        {
            int num[3];
            for(int i=0;i<3;i++)
                cin >> num[i];
            if(judgeTriangle(num))
                cout << "OK" << endl;
            else
                cout << "Wrong!!" << endl;
        }
    }
    return 0;
}