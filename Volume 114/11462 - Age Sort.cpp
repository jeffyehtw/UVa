#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n && n)
    {
        vector<int> ages;
        for(int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            ages.push_back(temp);
        }
        sort(ages.begin(), ages.end());
         
        for(int i = 0; i < n; i++)
        {
            if(i > 0)
            cout << " ";
            cout << ages[i];
        }
        cout << endl;
    }
    return 0;
}