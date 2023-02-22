#include <bits/stdc++.h>
using namespace std;
void dfs(int src, vector<vector<int>> &adj, vector<bool> &vis)
{
    vis[src] = 1;
    cout<<src<<" ";
    for (auto it : adj[src])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
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
            dfs(i,adj,vis);
        }
    }
}