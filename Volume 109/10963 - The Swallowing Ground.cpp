#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    bool print = false;
 
    while (cin >> n)
    {
        while (n--)
        {
            bool fixed = true;
 
            if (print)
                cout << endl;
            print = true;
 
            int m; cin >> m;
            int differ;
 
            int x, y;
            cin >> x >> y;
 
            differ = x - y;
             
            for (int i = 1; i < m; i++)
            {
                cin >> x >> y;
 
                if (x - y != differ)
                    fixed = false;
            }
            if (fixed)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}