#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
class proposal
{
    public:
        proposal(string a, double b,int c)
        {
            name = a;
            price = b;
            ok = c;
        }
        proposal() {}
        string name;
        double price;
        int ok;
 
        bool operator < (proposal &x) const
        {
            if (x.ok == ok)
                return x.price > price;
            return x.ok < ok;
        }
};
 
int main()
{
    int n, p;
    int counter = 1;
 
    while (cin >> n >> p)
    {
        if (!n && !p)
            break;
 
        cin.get();
 
        if (counter > 1)
            cout << endl;
 
        for (int i = 0; i < n; i++)
        {
            string temp;
            getline(cin, temp);
        }
 
        vector<proposal> x;
 
        for (int i = 0; i < p; i++)
        {
            string name; getline(cin, name);
            double price; cin >> price;
            int ok; cin >> ok;
 
            cin.get();
 
            x.push_back(proposal(name, price, ok));
 
            for (int j = 0; j < ok; j++)
            {
                string temp;
                getline(cin, temp);
            }
        }
        sort(x.begin(), x.end());
 
        cout << "RFP #" << counter << endl;
        cout << x[0].name << endl;
        counter++;
    }
    return 0;
}