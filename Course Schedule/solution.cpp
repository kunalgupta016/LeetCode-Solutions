class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(int i =0;i<edges.size();i++){
            int u = edges[i][1];
            int v = edges[i][0];
            adj[u].push_back(v);

        }

        vector<int> indegree(n);
        for(int i = 0;i<adj.size();i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        queue<int> q;
        for(int i = 0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        if(cnt==n) return true;
        return false;

    }

};