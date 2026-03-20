class Solution {
public:

    void dfs(int src ,vector<vector<int>> &adj ,vector<int> &vis ){
        vis[src] =1;
        for(auto it:adj[src]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
         for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, 0);
        dfs(source, adj, vis);

        return vis[destination];



    }
};