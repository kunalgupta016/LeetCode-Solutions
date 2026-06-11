class Solution {
public:
    const int MOD = 1e9+7;
    int power(long long a , long long b){
        long long ans = 1;
        a = a%MOD;
        while(b>0){
            if(b&1){
                ans = (ans*a)%MOD;
            }
            a = (a*a)%MOD;
            b = b>>1;
        }
        return (int)ans;
    }

    int dfs(vector<vector<int>>& adj,int crr , int prev){

        if(adj[crr].size()==0){
            return 0;
        }
        int ans = 0;
        for(auto it:adj[crr]){
            if(it!=prev){
                ans = max(ans,1+dfs(adj,it,crr));
            }
        }

        return ans;

    }

    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size()+2;
        vector<vector<int>> adj(n);

        for(auto it:edges){
            
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int depth = dfs(adj,1,-1);
        return power(2,depth-1);


    }
};