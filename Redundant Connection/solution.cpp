class DSU {

    

public:
	vector<int> parent, rank, size;
    
    DSU(int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);
        size.resize(n+1, 1);

        for(int i = 1; i < n; i++)
            parent[i] = i;
    }

   
    int findParent(int node) {
        if(parent[node] == node)
            return node;
        return parent[node] = findParent(parent[node]);
    }

    
    bool unionByRank(int u, int v) {
        u = findParent(u);
        v = findParent(v);
        if(u == v) return false;

        if(rank[u] < rank[v]) {
            parent[u] = v;
        }
        else if(rank[u] > rank[v]) {
            parent[v] = u;
        }
        else {
            parent[v] = u;
            rank[u]++;
        }
        return true;
    }

    
    void unionBySize(int u, int v) {
        u = findParent(u);
        v = findParent(v);
        if(u == v) return;

        if(size[u] < size[v]) {
            parent[u] = v;
            size[v] += size[u];
        }
        else {
            parent[v] = u;
            size[u] += size[v];
        }
    }
};




class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DSU ds(n);
        for(auto it:edges){
            int u = it[0];
            int v = it[1];
           if(!ds.unionByRank(u,v)){
            return {u,v};
           }
        }
        return {};

    }
};