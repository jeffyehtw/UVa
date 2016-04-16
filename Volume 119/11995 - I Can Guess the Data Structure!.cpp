#include<iostream>
#include<stack>
#include<queue>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        stack<int> st;
        queue<int> qu;
        priority_queue<int> pq;
 
        // st, qu, pq
        bool judge[3] = { true, true, true };
 
        while (n--)
        {
            int operation, element;
            cin >> operation >> element;
 
            if (operation == 1)
            {
                st.push(element);
                qu.push(element);
                pq.push(element);
            }
            else if (operation == 2)
            {
                if (!st.empty() && element == st.top())
                    st.pop();
                else
                    judge[0] = false;
 
                if (!qu.empty() && element == qu.front())
                    qu.pop();
                else
                    judge[1] = false;
 
                if (!pq.empty() && element == pq.top())
                    pq.pop();
                else
                    judge[2] = false;
            }
        }
 
        int count = 0;
        for (int i = 0; i < 3; i++)
        if (judge[i])
            count++;
 
        if (count > 1)
            cout << "not sure\n";
        else if (count == 1)
        {
            if (judge[0])
                cout << "stack\n";
            else if (judge[1])
                cout << "queue\n";
            else
                cout << "priority queue\n";
        }
        else
            cout << "impossible\n"; 
    }
    return 0;
}