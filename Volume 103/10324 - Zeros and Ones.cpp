#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
class obj
{
    public:
        obj() {}
        obj(int x, int y)
        :start(x), end(y) {}
        int start;
        int end;    
};
 
using namespace std;
 
int main()
{
    const string ans[2] = {
        "No", "Yes"
    };
     
    string s;
    int caseIndex = 1;
    while(cin >> s)
    {
        //variables
        vector<obj> var;
        int start = 0;
        char c = s[0];
        for(int i = 1; i < s.length(); i++)
        if(c != s[i])
        {
            var.push_back(obj(start, i - 1));
            start = i;
            c = s[i];
        }
        //last
        var.push_back(obj(start, s.length() - 1));
                 
        //input
        int n; cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
             
            if(x > y)
                swap(x, y);
             
            bool ok = false;
            for(int j = 0; j < var.size(); j++)
            if(x >= var[j].start && y <= var[j].end)
            {
                ok = true;
                break;
            }
         
            //output
            if(i == 0)
            {
                cout << "Case " << caseIndex++;
                cout << ":\n";
            }
            cout << ans[ok] << endl;    
        }
    }
    return 0;
}