#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            int num; cin >> num;
            int count[10] = { 0 };
 
            for (int i = 1; i < num + 1; i++)
            {
                string s = to_string(i);
 
                for (int j = 0; j < s.length(); j++)
                    count[s[j] - '0']++;
            }
             
            for (int i = 0; i < 10; i++)
            {
                cout << count[i];
                 
                if (i < 9)
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}