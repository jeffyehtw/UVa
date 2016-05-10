#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int sumDigit(int var)
{
    int ans = 0;
    while(var)
    {
        ans += var % 10;
        var /= 10;
    }
    return ans;
}
 
class obj
{
    public:
        obj() {}
        obj(string var)
        {           
            value = 0;
            int n = var.length();
            for(int i = 0; i < n; i++)
            if(isalpha(var[i]))
            value += tolower(var[i])- 'a' + 1;
             
            while(value >= 10)
                value = sumDigit(value);            
        }
        string s;
        int value;  
};
 
int main()
{
    string s;
    obj var[2];
    while(getline(cin, s))
    {
        var[0] = obj(s);
         
        getline(cin, s);
        var[1] = obj(s);
         
        if(var[0].value > var[1].value)
            swap(var[0], var[1]);
             
        double ratio = var[0].value;
        ratio /= var[1].value;
         
        //output
        printf("%.2lf %\n", ratio * 100);
    }
    return 0;
}