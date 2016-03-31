#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        bool back[10001] = { false };
 
        for (int i = 0; i < m; i++)
        {
            int index; cin >> index;
            back[index] = true;
        }
 
        if (n == m)
            cout << "*" << endl;
        else
        {
            for (int i = 1, j = 0; i < n + 1; i++)
            {
                if (back[i])
                    j++;
                else
                    cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}