#include<iostream>
#include<vector>
#include<cmath>
 
using namespace std;
 
class obj
{
public:
    obj(unsigned int var) :num(var)
    {
        vector<int> temp;
        while (var > 0)
        {
            temp.push_back(var % 10);
            var /= 10;
        }
        for (int i = 0; i < temp.size(); i++)
            bit.push_back(temp[temp.size() - 1 - i]);
    }
    obj() {}
    vector<int> bit;
    unsigned int num;
};
 
bool palindrome(vector<int> var)
{
    int counter = 0;
 
    for (int i = 0; i < var.size() / 2; i++)
    {
        if (var[i] == var[var.size() - 1 - i])
            counter++;
    }
 
    if (var.size() / 2 == counter)
        return true;
    return false;
}
 
int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            int temp; cin >> temp;
 
            obj ori = obj(temp);
            obj rev;
 
            int counter = 0;
 
            while (true)
            {
                int last = ori.bit.size() - 1;
                unsigned int sum = 0;
 
                for (int i = 0; i < last + 1; i++)
                {
                    int digit = ori.bit[last - i];
 
                    rev.bit.push_back(digit);
                    sum += digit * pow(10.0, last - i);
                }
                rev.num = sum;
 
                ori = obj(ori.num + sum);
                counter++;
 
                if (palindrome(ori.bit))
                    break;
            }
            cout << counter << " " << ori.num << endl;;
        }
    }
    return 0;
}