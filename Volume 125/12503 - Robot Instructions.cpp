#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int t;
    while(cin >> t)
    while(t--)
    {
        int pos = 0;
        int instr[101];
        int n; cin >> n;
        for(int i = 1; i <= n; i++)
        {
            string s; cin >> s;
             
            if(s == "LEFT")
            {
                instr[i] = -1;
                pos--;
            }
            else if(s == "RIGHT")
            {
                instr[i] = 1;
                pos++;
            }
            else
            {
                cin >> s;
                int index;
                cin >> index;
 
                instr[i] = instr[index];
                pos += instr[index];
            }
        }
        cout << pos << endl;
    }
    return 0;
}