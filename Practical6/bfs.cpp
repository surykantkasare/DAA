#include <bits/stdc++.h>
using namespace std;
void bfs(int src, vector<vector<int>> &adj, vector<bool> &vis)
{
    queue<int>q;
    q.push(src);
    while(q.size())
    {
        int node=q.front();
        q.pop();
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                q.push(it);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bfs(i,adj,vis);
        }
    }
}