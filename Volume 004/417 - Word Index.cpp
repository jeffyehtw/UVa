#include<iostream>
#include<string>
#include<queue>
#include<map>
 
using namespace std;
 
int main()
{
    const string arr[26] = {
        "a", "b", "c", "d",
        "e", "f", "g", "h",
        "i", "j", "k", "l",
        "m", "n", "o", "p",
        "q", "r", "s", "t",
        "u", "v", "w", "x",
        "y", "z"
    };
     
    //initialize
    queue<string> q;
    for(int i = 0; i < 26; i++)
        q.push(arr[i]);
     
    int index = 1;
    map<string, int> m;
    while(!q.empty())
    {
        string cur = q.front();
        int last = cur.length() - 1;
        q.pop();
         
        if(cur.length() > 5)
            break;
         
        //map
        m[cur] = index;
        index++;
         
        for(int j = 0; j < 26; j++)
        if(j > cur[last] - 'a')
            q.push(cur + arr[j]);
    }
     
    string s;
    while(cin >> s)
    cout << m[s] << endl;   
    return 0;
} 