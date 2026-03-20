class Solution {
public:
    vector<int> par, rank;

    int findPar(int node) {
        if (par[node] == node) return node;
        return par[node] = findPar(par[node]);
    }

    void unionByRank(int u, int v) {
        int pu = findPar(u);
        int pv = findPar(v);
        if (pu == pv) return;

        if (rank[pu] < rank[pv]) {
            par[pu] = pv;
        } else if (rank[pv] < rank[pu]) {
            par[pv] = pu;
        } else {
            par[pv] = pu;
            rank[pu]++;
        }
    }

    int makeConnected(int n, vector<vector<int>>& c) {
        if (c.size() < n - 1) return -1; 

        rank.resize(n, 0);
        par.resize(n);
        for (int i = 0; i < n; i++) {
            par[i] = i;
        }

        for (auto &it : c) {
            unionByRank(it[0], it[1]);
        }

        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(findPar(i));
        }

        return st.size() - 1;
    }
};