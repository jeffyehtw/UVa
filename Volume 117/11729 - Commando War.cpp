#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class soldier
{
    public:
        soldier(int B, int J):b(B), j(J) {}
        soldier() {}
        ~soldier() {}
        //overload operator
        bool operator < (const soldier& x) const
        { return j>x.j; }
        int b, j;
};
int main()
{
    int n, r=1;
    while(cin >> n && n)
    {
        //input
        vector<soldier> S;
        for(int i=0;i<n;i++)
        {
            int b, j;
            cin >> b >> j;
            S.push_back(soldier(b, j));
        }
        //sort
        sort(S.begin(), S.end());
         
        int sum=0, end=0;
        for(int i=0;i<n;i++)
        {
            sum+=S[i].b;
            end=max(end, sum+S[i].j);
        }
 
        cout << "Case " << r << ": "
             << end << endl;
        r++;
    }
    return 0;
}