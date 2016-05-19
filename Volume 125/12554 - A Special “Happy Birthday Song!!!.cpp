#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    const string song[16] = {
        "Happy", "birthday", "to",
        "you", "Happy", "birthday",
        "to", "you", "Happy", 
        "birthday", "to", "Rujia",
        "Happy", "birthday", "to",
        "you"
    };
     
    int n;
    while(cin >> n)
    {
        //input
        string name[101];
        for(int i = 0; i < n; i++)
            cin >> name[i];
         
        //output
        int m = n / 16;
        if(n % 16 > 0) m++;
        m *= 16;
        for(int i = 0; i < m; i++)
        {
            cout << name[i % n];
            cout << ": " << song[i % 16];
            cout << endl;
        }
    }
    return 0;
}