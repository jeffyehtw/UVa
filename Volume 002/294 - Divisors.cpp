#include<iostream>
#include<vector>
 
#define MAX 300005
 
using namespace std;
 
vector<int> prime;
 
void initialize()
{
    //initialize boolean
    bool p[MAX];
    p[0] = false;
    p[1] = true;
    for (int i = 2; i < MAX; i++)
        p[i] = true;
     
    for (int i = 2; i < MAX; i++)
    if (p[i])
    {
        prime.push_back(i);
        for (int j = i * 2; j < MAX; j += i)
            p[j] = false;
    }
}
 
int main()
{
    //intialize
    initialize();
     
    int n;
    while(cin >> n)
    while(n--)
    {
        //input
        int x, y;
        cin >> x >> y;
         
        int max = 0;
        int index = 0;
         
        for(int i = x; i <= y; i++)
        {
            //decomposed
            int temp = i;
            vector<int> count;
            for(int j = 0; j < prime.size(); j++)
            {
                count.push_back(0);
                 
                if(temp == 1)
                    break;  
                                 
                while(temp % prime[j] == 0)
                {                   
                    count[count.size() - 1]++;
                    temp /= prime[j];
                }
            }
             
            int current = 1;
            for(int j = 0; j < count.size(); j++)
                current *= (count[j] + 1);
             
            if(current > max)
            {
                max = current;
                index = i;
            }
        }
         
        //output
        printf("Between %d and %d, ", x, y);
        printf("%d has a maximum ", index);
        printf("of %d divisors.\n", max);
    }
    return 0;
}