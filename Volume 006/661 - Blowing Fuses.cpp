#include<iostream>
 
using namespace std;
 
class obj
{
    public:
        obj():on(false) {}
        int capacity;
        bool on;    
};
 
int main()
{
    int n, m, c;
    int caseIndex = 1;
    while(cin >> n >> m >> c)
    {
        if(!n && !m && !c)
            break;
             
        //variables
        obj machine[21];    
             
        //input
        int cur = 0;
        int max = 0;
        for(int i = 1; i <= n; i++)
            cin >> machine[i].capacity;
         
        for(int i = 0; i < m; i++)
        {
            int k; cin >> k;
             
            if(machine[k].on)
                cur -= machine[k].capacity;
            else
                cur += machine[k].capacity;
                 
            machine[k].on = !machine[k].on;
             
            if(cur > max)
                max = cur;
        }
         
        //output    
        cout << "Sequence " << caseIndex++;
         
        if(max > c)
            cout << "\nFuse was blown.\n";
        else
        {
            cout << "\nFuse was not blown.\n";
            cout << "Maximal power consumption";
            cout << " was " << max << " amperes.\n";
        }
        cout << endl;
    }
    return 0;
} 