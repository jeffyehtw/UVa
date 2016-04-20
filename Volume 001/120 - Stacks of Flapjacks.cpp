#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{   
    int t;
    while(cin >> t)
    {
        //input
        vector<int> in;
        in.push_back(t);
         
        char c; 
        cin.get(c); 
        while(c != '\n')
        {
            cin >> t;
            in.push_back(t);
            cin.get(c);
        }
         
        //output
        for(int i = 0; i < in.size(); i++)
        {
            if(i > 0)
                cout << " ";
            cout << in[i];
        }
        cout << endl;
         
        //flip
        bool first = true;
        for(int i = 0; i < in.size(); i++)
        {
            //is sorted
            bool ok = true;
            for(int j = 1; j < in.size(); j++)
            if(in[j] < in[j - 1])
                ok = false;
                 
            if(ok)
                break;
             
            int max = 0;
            int index = 0;
            for(int j = 0; j < in.size() - i; j++)
            if(in[j] > max)
            {
                max = in[j];
                index = j + 1;
            }
             
            //output            
            cout << in.size() - index + 1 << " ";           
            reverse(in.begin(), in.begin() + index);
         
            //is sorted
            ok = true;
            for(int j = 1; j < in.size(); j++)
            if(in[j] < in[j - 1])
                ok = false;         
            if(ok)
                break;
                 
            //output
            cout << i + 1 << " ";               
            reverse(in.begin(), in.end() - i);
        }
        cout << 0 << endl;  
    }
    return 0;
}