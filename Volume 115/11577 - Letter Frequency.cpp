#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        cin.get();
        while(n--)
        {
            //input
            int eng[26]={0};
            string s; getline(cin, s);
            for(int i=0;i<s.length();i++)
                for(int j=0;j<26;j++)
                    if(s[i]=='a'+j || s[i]=='A'+j)
                        eng[j]++;
            //find max
            int max=0;
            for(int i=0;i<26;i++)
                if(max<eng[i])
                    max=eng[i];
            //output
            for(int i=0;i<26;i++)
                if(eng[i]==max)
                    cout << (char)('a'+i);
            cout << endl;
        }
    }
    return 0;
}