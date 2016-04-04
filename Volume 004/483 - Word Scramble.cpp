#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
void output(vector<string> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            cout << s[i][s[i].length() - 1 - j];
        }
 
        if (i < s.size() - 1)
            cout << " ";
    }
}
 
int main()
{
    vector<string> s;
    string temp;
 
    //input
    while (cin >> temp)
    {
        s.push_back(temp);
 
        char c; cin.get(c);
 
        if (c == '\n')
        {
            output(s);
            cout << endl;
            s.clear();
        }
        else
        {
            while (cin >> temp)
            {
                s.push_back(temp);
                cin.get(c);
 
                if (c == '\n')
                    break;
            }
            output(s);
            cout << endl;
            s.clear();
        }
    }
    return 0;
}