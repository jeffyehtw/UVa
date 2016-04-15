#include<iostream>
#include<vector>
#include<cmath>
 
using namespace std;
 
class obj
{
    public:
        obj(int a, int b)
        :value(a), exp(b) {}
        obj() {}
        int value;
        int exp;
};
 
int main()
{
    int temp;
    while(cin >> temp)
    {
        //input
        char c;
        cin.get(c);
        if(c == '-')
            temp *= -1;
 
        vector<obj> x;
        if(temp != 0)
            x.push_back(obj(temp, 8));
 
        for(int i = 7; i > -1; i--)
        {
            cin >> temp;
            cin.get(c);
            if(c == '-')
                temp *= -1;
            if(temp != 0)
            x.push_back(obj(temp, i));
        }
 
        // 000000000
        if(x.size() == 0)
            cout << 0;
 
        for(int i = 0; i < x.size(); i++)
        {
            if(i > 0)
            {
                if(x[i].value > 0)
                    cout << " + ";
                else
                    cout << " - ";
            }
            // first sign
            else if(i == 0 && x[i].value < 0)
                cout << "-";
 
            if(x[i].exp > 0)
            {
                if(abs(x[i].value) > 1)
                    cout << abs(x[i].value);
                cout << "x";
                if(x[i].exp > 1)
                    cout << "^" << x[i].exp;
            }
            //already print sign
            else
                cout << abs(x[i].value);
        }
        cout << endl;
    }
}