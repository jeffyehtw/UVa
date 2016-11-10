#include<iostream>
#include<string>
#include<map>
 
using namespace std;
 
int main()
{
    map<string, string> m;
    m["Hajj"] = "Hajj-e-Akbar";
    m["Umrah"] = "Hajj-e-Asghar";
         
    string s;
    int index = 1;
    while(cin >> s && s != "*")
    {
        cout << "Case " << index++;
        cout << ": " << m[s] << endl;
    }
    return 0;
}