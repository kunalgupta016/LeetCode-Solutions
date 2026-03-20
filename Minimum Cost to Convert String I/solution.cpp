class Solution {
public:

    vector<long long> dijkstra(int src, vector<vector<pair<int,int>>>& adj){
        priority_queue<pair<long long,int> , vector<pair<long long ,int>> , greater<pair<long long,int>>> pq;
        vector<long long > dist(26,LLONG_MAX);
        dist[src] = 0;
        pq.push({0,src});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            long long d = it.first;
            int u = it.second;
            if(d>dist[u]) continue;
            for(auto it1:adj[u]){
                auto v = it1.first;
                auto w = it1.second;
                if(dist[v]>d+w){
                    dist[v] = d+w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;

    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<int>> minCost(26, vector<int>(26, INT_MAX));
        for(int i = 0;i<original.size();i++){
            int u = original[i]-'a';
            int v = changed[i]-'a';
            int w = cost[i];
            minCost[u][v] = min(minCost[u][v],w);
        }


         vector<vector<pair<int,int>>> adj(26);

        for(int u = 0;u<26;u++){
            for(int v = 0;v<26;v++){
                if(minCost[u][v]!=INT_MAX){
                    
                    adj[u].push_back({v,minCost[u][v]});
                }
            }
        }

        long long ans = 0;
        vector<vector<long long>> allDist(26);
        for(int i = 0;i<26;i++){
            allDist[i] = dijkstra(i,adj);
        }

        for(int i = 0;i<source.size();i++){
            int s = source[i]-'a';
            int t = target[i] - 'a';
            if(s==t) continue;
            if(allDist[s][t] == LLONG_MAX)
                return -1;
            ans+=allDist[s][t];
        }

        return ans;
        


    }
};