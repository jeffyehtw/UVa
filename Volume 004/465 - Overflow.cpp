#include<iostream>
#include<string>
 
#define INT_MAX 2147483647
 
using namespace std;
 
int main()
{
    string x, y;
    string s;
 
    while (cin >> x >> s >> y)
    {
        double a = stod(x);
        double b = stod(y);
 
        cout << x << " " << s << " " << y << endl;
 
        if (a > INT_MAX)
            printf("first number too big\n");
        if (b > INT_MAX)
            printf("second number too big\n");
 
        if (s == "+" && a + b > INT_MAX)
            printf("result too big\n");
        if (s == "*" && a * b > INT_MAX)
            printf("result too big\n");
    }
    return 0;
}