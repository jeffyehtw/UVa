#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n && n < 101)
    {
        for (int i = 0; i<n; i++)
        {
            int m; cin >> m;
            if (!(m && m<100))
                break;
            cin.get();
            string s; cin >> s;
            int count = 0;
            for (int i = 0; i<s.length(); i++)
            {
                if (s[i] == '.')
                {
                    count++;
                    i += 2;
                }
            }
            cout << "Case " << i + 1
                 << ": " << count << endl;
        }
    }
    return 0;
}