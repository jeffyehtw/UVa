#include<iostream>
#include<queue>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n && n)
    {       
        //input
        priority_queue<int, vector<int>, greater<int> > pq;
        while(n--)
        {
            int temp; cin >> temp;
            pq.push(temp);
        }
         
        //calculate
        int cost = 0;
        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            cost += x + y;
            pq.push(x + y);
        }
        cout << cost << endl;
    }
    return 0;
} 