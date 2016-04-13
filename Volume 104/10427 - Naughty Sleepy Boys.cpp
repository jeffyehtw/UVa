#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;
 
int main()
{
    long long data[9] = { 0 };
    data[0] = 1;
 
    for (int i = 1; i < 9; i++)
    {
        int upper = pow(10, i);
        int lower = pow(10, i - 1);
 
        data[i] += data[i - 1];
        data[i] += i * (upper - lower);
    }
 
    int n;
 
    while (cin >> n)
    {
        for (int i = 0; i < 9; i++)
        {
            if (n < data[i])
            {               
                int differ = n - data[i - 1];
                int num = differ / i;
                int index = differ % i;
                int target = num + pow(10.0, i - 1);
 
                cout << to_string(target)[index] << endl;
                break;
            }
        }
    }
    return 0;
}