#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    bool odd = true;
 
    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '"')
            {
                if (odd)
                    cout << "``";
                else
                    cout << "''";
 
                odd = !odd;
            }
            else
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}