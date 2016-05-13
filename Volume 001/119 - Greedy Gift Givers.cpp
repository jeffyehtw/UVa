#include<iostream>
#include<string>
#include<vector>
#include<map> 
 
using namespace std;
 
class obj
{
    public:
        obj():money(0) {}
        string name;
        int money;  
};
 
int main()
{
    int n;
    bool first = true;
    while(cin >> n)
    {
        //variables
        map<string, int> m;
        obj p[10];
         
        //input
        for(int i = 0; i < n; i++)
        {
            cin >> p[i].name;
            m[p[i].name] = i;
        }
         
        for(int i = 0; i < n; i++)
        {
            string name;
            int value, r; 
            cin >> name >> value >> r;
             
            if(r > 0)
            {
                p[m[name]].money -= (value / r) * r;
                 
                for(int j = 0; j < r; j++)
                {
                    string t; cin >> t;
                    p[m[t]].money += value / r;
                }
            }
        }
         
        //output
        if(!first)
            cout << endl;
        first = false;
        for(int i = 0; i < n; i++)
        {
            cout << p[i].name << " ";
            cout << p[i].money << endl;
        }
    }
    return 0;
}