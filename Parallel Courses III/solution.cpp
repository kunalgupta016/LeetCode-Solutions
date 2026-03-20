class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        for(auto r:relations){
            int u = r[0]-1;
            int v = r[1]-1;
            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int> q;
        for(int i = 0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> visited(n,0);
        int ans = 0;
        while(!q.empty()){
            int course = q.front();
            q.pop();
            for(int v:adj[course]){
                visited[v] = max(visited[v],time[course]+visited[course]);
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
            ans = max(ans,time[course]+visited[course]);
        }
        return ans;
    }
};