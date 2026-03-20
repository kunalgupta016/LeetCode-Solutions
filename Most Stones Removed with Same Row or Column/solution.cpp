class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if(parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if(x == y) return;

        if(rank[x] < rank[y])
            parent[x] = y;
        else if(rank[x] > rank[y])
            parent[y] = x;
        else {
            parent[y] = x;
            rank[x]++;
        }
    }
};


class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        DSU ds(n);
        unordered_map<int,int> rM;
        unordered_map<int,int> cM;
        for(int i = 0;i<stones.size();i++){
            int r = stones[i][0];
            int c = stones[i][1];
            if(rM.count(r)){
                ds.unite(i,rM[r]);
            }else{
                rM[r] = i;
            }

            if(cM.count(c)){
                ds.unite(i,cM[c]);
            }else{
                cM[c] = i;
            }
        }
        unordered_set<int> compon;
        for(int i =0;i<n;i++){
            compon.insert(ds.find(i));
        }
        return n-compon.size();

    }
};