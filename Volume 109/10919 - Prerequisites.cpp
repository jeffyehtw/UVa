#include<iostream>
#include<string>
#include<set>
 
using namespace std;
 
class obj
{
    public:
        obj() {}
        set<string> id;
        int c, r;
};
 
int main()
{
    const string ans[2] = {
        "no", "yes"
    };
     
    int k, M;
    while(cin >> k >> M)
    {
        //variables
        string selected[101];
        obj course[101];
         
        //input
        for(int i = 0; i < k; i++)
            cin >> selected[i];
             
        for(int i = 0; i < M; i++)
        {
            cin >> course[i].c;
            cin >> course[i].r;
             
            for(int j = 0; j < course[i].c; j++)
            {
                string temp; cin >> temp;
                course[i].id.insert(temp);
            }
        }
         
        //check
        bool ok = true;
        for(int i = 0; i < M; i++)
        {
            int count = 0;
            set<string>::iterator it;
            for(int j = 0; j < k; j++)
            {
                it = course[i].id.find(selected[j]);
                if(it != course[i].id.end())
                    count++;
            }
                 
            if(count < course[i].r)
            {
                ok = false;
                break;
            }   
        }
        cout << ans[ok] << endl;
    }
    return 0;
}