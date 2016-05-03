#include<iostream>
#include<vector>
#include<string>
 
using namespace std;
 
bool isDigital(char c)
{
    return c >= '0'
    && c <= '9';
}
 
int main()
{
    char alpha[10] = {
        'O', 'I', 'Z', 'E', 'A',
        'S', 'G', 'T', 'B', 'P'
    };
     
    int n;
    while(cin >> n)
    for(int i = 0; i < n; i++)
    {       
        if(i == 0)
            cin.get();
             
        //input
        string t;
        vector<string> s;
        while(getline(cin, t))
        {                           
            if(t.length() == 0)
                break;
            s.push_back(t);
        }
         
        for(int j = 0; j < s.size(); j++)
        for(int k = 0; k < s[j].length(); k++)
        if(isDigital(s[j][k]))
            s[j][k] = alpha[s[j][k] - '0'];
         
        //output
        for(int j = 0; j < s.size(); j++)
            cout << s[j] << endl;
         
        if(i < n - 1)
            cout << endl;
    }
    return 0;
}