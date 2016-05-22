#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int r=0;
    string s;
    while(getline(cin, s))
    {
        vector<int>  c_num;
        vector<char> c_char;
        //input
        for(int i=0;i<s.length();i++)
        {
            int found=0;
            for(int j=0;j<c_char.size();j++)
            {
                if(s[i]==c_char[j])
                {
                    found=1;
                    c_num[j]++;
                    break;
                }
            }
            //check new char
            if(!found)
            {
                c_char.push_back(s[i]);
                c_num.push_back(1);
            }
        }
        //sort  num
        for(int i=0;i<c_num.size();i++)
        {
            for(int j=i;j<c_num.size();j++)
            {
                if(c_num[i]>c_num[j])
                {
                    int n_temp=c_num[i];
                    c_num[i]=c_num[j];
                    c_num[j]=n_temp;
 
                    char c_temp=c_char[i];
                    c_char[i]=c_char[j];
                    c_char[j]=c_temp;
                }
            }
        }   
        //sort char
        for(int i=0;i<c_num.size();i++)
        {
            int index;
            for(index=i;index<c_num.size();index++)
                if(c_num[index]!=c_num[i])
                    break;
            for(int j=i;j<index;j++)
                for(int k=j;k<index;k++)
                    if(c_char[i]<c_char[k])
                    {
                        char temp=c_char[i];
                        c_char[i]=c_char[k];
                        c_char[k]=temp;
                    }
        }
        if(r>0)
            cout << endl;
        for(int i=0;i<c_num.size();i++)
            cout << (int)c_char[i] << " " << c_num[i] << endl;
        r++;
    }
    return 0;
}