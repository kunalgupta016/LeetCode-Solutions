#define ll long long
#define pll pair<ll, ll>
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pll>> adj(n);
        int MOD = 1e9 + 7;
        for (auto &it : roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        int src = 0;

        priority_queue<pll,vector<pll>,greater<pll>> pq;
        vector<ll> dist(n,LONG_MAX);
        vector<ll> w(n);
        pq.push({0,src});
        dist[src] = 0;
        w[src] = 1;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            ll dis = it.first;
            ll node = it.second;
            if(dis>dist[node]){
                continue;
            }
            for(auto it2:adj[node]){
                ll adjNode = it2.first;
                ll edW = it2.second;
                if(dis + edW<dist[adjNode]){
                    dist[adjNode] = dis + edW;
                    w[adjNode] = w[node];
                    pq.push({dist[adjNode],adjNode});
                }
                else if(dis + edW ==dist[adjNode]){
                    w[adjNode] = (w[node]+w[adjNode])%MOD;

                }

            }

        }

        return w[n-1];

    

    }
};