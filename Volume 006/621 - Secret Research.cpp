#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    while(n--)
    {
        string s; cin >> s;
        int m = s.length();
        if(s == "1" || s == "4"
        || s == "78")
            cout << "+\n";
        else if(s[m - 2] == '3'
        && s[m - 1] == '5')
            cout << "-\n";
        else if(s[0] == '9'
        && s[m - 1] == '4')
            cout << "*\n";
        else if(s[0] == '1'
        && s[1] == '9' && s[2] == '0')
            cout << "?\n";
    }
    return 0;
}