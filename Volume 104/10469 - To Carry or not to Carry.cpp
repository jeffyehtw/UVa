#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    int a, b;
 
    while (cin >> a >> b)
    {
        bool a_bin[32] = { 0 };
        bool b_bin[32] = { 0 };
 
        bool sum[32] = { 0 };
 
        for (int i = 0; i < 32; i++)
        {
            a_bin[i] = a % 2;
            b_bin[i] = b % 2;
 
            sum[i] = (!a_bin[i] && b_bin[i])
                || (a_bin[i] && !b_bin[i]);
 
            a /= 2;
            b /= 2;
        }
 
        int dec = 0;
        for (int i = 0; i < 32; i++)
        if (sum[31 - i])
            dec += pow(2.0, 31 - i);
        cout << dec << endl;
    }
    return 0;
}