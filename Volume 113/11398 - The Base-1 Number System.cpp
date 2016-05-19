#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<fstream>
 
using namespace std;
 
int main()
{
    string s;
    vector<int> buffer, flag;
 
    while (cin >> s && s != "~")
    {
        if (s == "#")
        {
            int sum = 0;
            if (flag.size() > 0)
            for (int i = 0; i < flag.size(); i++)
            if (flag[i] == 1)
                sum += pow(2, flag.size() - 1 - i);
            cout << sum << endl;
 
            buffer.clear();
            flag.clear();
        }
        else if (s == "0")
            buffer.push_back(1);
        else if (s == "00")
            buffer.push_back(0);
        else
        {
            for (int i = 0; i < s.length() - 2; i++)
            if(s[i] == '0')
                flag.push_back(buffer[buffer.size() - 1]);
        }
    }
    return 0;
}