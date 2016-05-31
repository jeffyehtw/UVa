#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int table[26];
    for(int i = 0; i < 26; i++)
    {
        if(i <= 'C' - 'A')
            table[i] = 2;
        else if(i <= 'F' - 'A')
            table[i] = 3;
        else if(i <= 'I' - 'A')
            table[i] = 4;
        else if(i <= 'L' - 'A')
            table[i] = 5;
        else if(i <= 'O' - 'A')
            table[i] = 6;
        else if(i <= 'S' - 'A')
            table[i] = 7;
        else if(i <= 'V' - 'A')
            table[i] = 8;
        else if(i <= 'Z' - 'A')
            table[i] = 9;
    }
     
    string s;
    while(cin >> s)
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            cout << table[s[i] - 'A'];
        else
            cout << s[i];
     
        if(i == s.length() - 1)
            cout << endl;
    }
    return 0;
}