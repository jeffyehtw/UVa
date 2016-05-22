#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include<vector>
 
using namespace std;
 
int main()
{   
    map<int, int> m;
    vector<int> output;
     
    //input
    string s;
    while(getline(cin, s))
    {
        int cur;
        stringstream ss(s);
        while(ss >> cur)
        {
            if(!m[cur])
                output.push_back(cur);
            m[cur]++;
        }   
    }
     
    //output
    for(int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
        cout << m[output[i]] << endl;
    }   
    return 0;
}