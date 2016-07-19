#include<iostream>
#include<queue>
#include<map>
 
#define MAX 31 
 
using namespace std;
 
bool visited[MAX];
bool network[MAX][MAX];
 
void BFS(int node, int n, int ttl)
{
    //initialize
    queue<int> q, r;
    q.push(node);
    visited[node] = true;
  
    for(int i = 0; i <= ttl; i++)
    {
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            visited[cur] = true;
             
            for (int j = 1; j <= n; j++)
            if (!visited[j] && network[cur][j])
                r.push(j); 
        }
        q = r;              
    }
}
 
void initialVisited()
{
    for(int i = 1; i <= MAX; i++)
        visited[i] = false;
}
 
int main()
{
    int n;
    int caseIndex = 1;
    while(cin >> n && n)
    {
        //initialize
        for(int i = 1; i < MAX; i++)
        for(int j = 1; j < MAX; j++)
            network[i][j] = i == j;
             
        //input
        map<int, int> p;
        for(int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
             
            if(!p[x])
                p[x] = p.size();
            if(!p[y])
                p[y] = p.size();
 
            network[p[x]][p[y]] = true;
            network[p[y]][p[x]] = true;
        }
         
        int m = p.size();
         
        //query
        int node, ttl;
        while(cin >> node >> ttl)
        {
            if(!node && !ttl)
                break;
                 
            initialVisited();   
                         
            int count = 0;
            if(!p[node])
                count = m;  
            else
            {   
                BFS(p[node], m, ttl);   
                for(int i = 1; i <= m; i++)      
                if(!visited[i])
                    count++;    
            }
             
            //output
            cout << "Case " << caseIndex++;
            cout << ": " << count;
            cout << " nodes not reachable";
            cout << " from node " << node;
            cout << " with TTL = " << ttl;
            cout << "." << endl;        
        }
    }
    return 0;
}