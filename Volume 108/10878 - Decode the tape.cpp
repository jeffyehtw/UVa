#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main()
{
    bool print = false;
    string temp;
 
    while (getline(cin, temp))
    {
        if (temp[0] != '_')
        {
            int index = 0;
            for (int i = 0; i < temp.length(); i++)
            {
                if (temp[i] == 'o')
                    index = index * 2 + 1;
                else if (temp[i] == ' ')
                    index *= 2;
            }
            cout << (char)index;
        }
    }
    return 0;
}