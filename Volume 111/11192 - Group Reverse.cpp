#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    string s;
 
    while (cin >> n >> s)
    {
        string rev = s;
        int size = s.length() / n;
 
        for (int i = 0; i < s.length(); i += size)
        for (int j = 0; j < size; j++)
                rev[i + j] = s[i + size - 1 - j];
        cout << rev << endl;
    }
    return 0;
}