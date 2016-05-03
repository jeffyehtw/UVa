#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    int counter = 1;
 
    while (scanf("%d", &n) != EOF)
    {
        vector<int> num;
 
        while (n--)
        {
            int temp; cin >> temp;
            num.push_back(temp);
        }
 
        long long max = 0;
 
        for (int i = 0; i < num.size(); i++)
        {
            long long product = num[i];
 
            if (product > max)
                max = product;
 
            for (int j = i + 1; j < num.size(); j++)
            {
                product *= num[j];
                if (product > max)
                    max = product;
            }
             
        }
        cout << "Case #" << counter << ": ";
        cout << "The maximum product is " << max << ".\n\n";
        counter++;
    }
    return 0;
}