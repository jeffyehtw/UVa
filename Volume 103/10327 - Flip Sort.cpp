#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> x;
         
        //input
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            x.push_back(temp);
        }
         
        bool ok = false;
        int counter = 0;
             
        while(!ok)
        {
            ok = true;
            for(int i = 0; i < n - 1; i++)
            {               
                if(x[i] > x[i + 1])
                {
                    swap(x[i], x[i + 1]);
                    counter++;
                    ok = false;
                }
            }
        }
        cout << "Minimum exchange operations : ";
        cout << counter << endl;
    }
    return 0;
}