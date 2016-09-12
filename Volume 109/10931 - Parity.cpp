#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n!=0)
    {
        vector<int> bin;
        int parity=0, m=n;
        while(m!=0)
        {
            if(m%2==1)
                parity++;
            bin.push_back(m%2);
            m/=2;
        }
        cout << "The parity of ";
        for(int i=0;i<bin.size();i++)
            cout << bin[bin.size()-1-i];
        cout << " is ";
        cout <<   parity << " (mod 2)." << endl;
    }
    return 0;
}