#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
    string s;
    while(getline(cin, s))
    {
        //initialize
        int lower[26];
        int upper[26];
        for(int i = 0; i < 26; i++)
        {
            lower[i] = 0;
            upper[i] = 0;
        }
             
        int m = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                upper[s[i] - 'A']++;
                m = max(m, upper[s[i] - 'A']);
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                lower[s[i] - 'a']++;
                m = max(m, lower[s[i] - 'a']);
            }
        }
         
        //output
        for(int i = 0; i < 26; i++)
        if(upper[i] == m)
            cout << char('A' + i);
        for(int i = 0; i < 26; i++)
        if(lower[i] == m)
            cout << char('a' + i);
        cout << " " << m << endl;
    }
    return 0;
}