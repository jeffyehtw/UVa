#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
 
using namespace std;
 
class obj
{
    public:
        obj() {}
        obj(int var)
        {
            id = var;
            score = 0;
            sol_num = 0;
            played = false;
             
            int n = 0;
            while(n < 10)
            {
                problem[n] = 0;
                solved[n++] = false;    
            }
        }
         
        int id;
        int problem[10];
        bool solved[10];
        bool played;
        int sol_num;    
        int score;  
};
 
bool cmp(obj x, obj y)
{
    if(x.sol_num != y.sol_num)
        return x.sol_num > y.sol_num;
    else if(x.score != y.score)
        return x.score < y.score;
    return x.id < y.id;
}
 
int main()
{
    int n;
    while(cin >> n)
    for(int i = 0; i < n; i++)
    {
         
        if(i == 0)
        {
            cin.get();
            cin.get();
        }   
 
        //cin.get();
         
        //initialize
        obj p[101];
        for(int j = 0; j < 101; j++)
            p[j] = obj(j);
         
        //input
        string s;
        while(getline(cin, s))
        {
            if(s.length() == 0)
                break;
                 
            stringstream ss(s);
             
            //id, problem id, time
            int id, q, t;
            char c;
             
            ss >> id >> q >> t >> c;
             
            p[id].played = true;
                         
            if(!p[id].solved[q])
            if(c == 'C')
            {   
                p[id].problem[q] *= 20;
                p[id].problem[q] += t; 
                p[id].score += p[id].problem[q];
                p[id].solved[q] = true;
                p[id].sol_num++;
            }
            else if(c == 'I')
                p[id].problem[q]++;                             
        }
        sort(p, p + 101, cmp);  
     
        //output
        for(int j = 0; j < 101; j++)
        if(p[j].played)
        {
            cout << p[j].id << " ";
            cout << p[j].sol_num << " ";
            cout << p[j].score << endl;
        }
        if(i < n - 1)
            cout << endl;
    } 
    return 0;
}