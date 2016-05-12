include<iostream>
 
using namespace std;
 
int main()
{
    int b, n;
    while(cin >> b >> n)
    {
        if(!b || !n)
            break;
             
        int bank[21];
        for(int i = 1; i <= b; i++)
            cin >> bank[i];
             
        for(int i = 0; i < n; i++)
        {
            int d, c, v;
            cin >> d >> c >> v;
            bank[d] -= v;
            bank += v;
        }
         
        bool ok = true;
        for(int i = 1; i <= b; i++)
        if(bank[i] < 0)
        {
            ok = false;
            break;
        }
         
        if(ok)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}