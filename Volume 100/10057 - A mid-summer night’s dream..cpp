#include<iostream>
#include<vector>
#include<algorithm>
 
#define MAX 1000001
 
using namespace std;
 
int calculate(vector<int> num, int var)
{
    int sum = 0;
 
    for (int i = 0; i < num.size(); i++)
        sum += abs(var - num[i]);
 
    return sum;
}
 
int data[1000001] = { 0 };
 
int main()
{
    int n;
    while (cin >> n && n)
    {
        vector<int> num;
 
        //initialize
        for (int i = 0; i < MAX; i++)
            data[i] = 0;
 
        //input
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            num.push_back(temp);
            data[temp]++;
        }
        sort(num.begin(), num.end());
 
        int left = (n - 1) / 2;
        int right = left;
 
        //number of middle
        int same = data[num[left]];
 
        //number of same min sum
        int possible = 1;
 
        if (n % 2 == 0)
        {
            right++;
 
            if (num[left] != num[right])
            {
                same += data[num[right]];
                possible++;
            }
        }
 
        int min = calculate(num, num[left]);
 
        //right
        for (int i = right + 1; i < num.size(); i++)
        {
            if (num[i] != num[right])
            {
                if (calculate(num, num[i]) == min)
                    possible++;
                else
                    break;
            }
        }
 
        //left
        for (int i = left - 1; i > -1; i--)
        {
            if (num[i] != num[left])
            {
                if (calculate(num, num[i]) == min)
                    possible++;
                else
                    break;
            }
        }
         
        //middle
        for (int i = num[left] + 1; i < num[right]; i++)
        {
            if (i != num[left] && i != num[right])
            {
                if (calculate(num, i) == min)
                    possible++;
            }
        }
        printf("%d %d %d\n", num[left], same, possible);
    }
    return 0;
}