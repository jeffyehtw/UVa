#include<iostream>
#include<string>
#include<map>
 
using namespace std;
 
int main()
{
    map<string, string> m;
    m["HELLO"] = "ENGLISH";
    m["HOLA"] = "SPANISH";
    m["HALLO"] = "GERMAN";
    m["BONJOUR"] = "FRENCH";
    m["CIAO"] = "ITALIAN";
    m["ZDRAVSTVUJTE"] = "RUSSIAN";
     
    string s;
    int index = 1;
    while(cin >> s && s != "#")
    {
        cout << "Case " << index++;
        cout << ": ";
         
        if(m[s].length() == 0) 
            cout << "UNKNOWN\n";
        else
            cout << m[s] << endl;
    }
    return 0;
}