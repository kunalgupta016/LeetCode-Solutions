class DSU {

    

public:
	vector<int> parent, rank, size;
    
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n, 1);

        for(int i = 0; i < n; i++)
            parent[i] = i;
    }

   
    int findParent(int node) {
        if(parent[node] == node)
            return node;
        return parent[node] = findParent(parent[node]);
    }

    
    void unionByRank(int u, int v) {
        u = findParent(u);
        v = findParent(v);
        if(u == v) return;

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
private:
    bool isValid(int newr,int newc,int n){
        return newr>=0 && newr<n && newc>=0 && newc<n;
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DSU ds(n*n);
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==0) continue;
                int dr[] = {-1,0,1,0};
                int dc[] = {0,-1,0,1};
                for(int i=0;i<4;i++){
                    int newr = row + dr[i];
                    int newc = col+ dc[i];
                    if(isValid(newr,newc,n) && grid[newr][newc]==1){
                        int nodeNo = row*n+col;
                        int adjNodeNo = newr *n + newc;
                        ds.unionBySize(nodeNo,adjNodeNo);
                    }
                }
            }
        }

        int mx = 0;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==1) continue;
                int dr[] = {-1,0,1,0};
                int dc[] = {0,-1,0,1};
                set<int> compo;
                for(int i=0;i<4;i++){
                    int newr = row + dr[i];
                    int newc = col+ dc[i];
                    if(isValid(newr,newc,n) && grid[newr][newc]==1){
                        compo.insert(ds.findParent(newr*n+newc));
                    }
                }
                int sizeTotal = 1;
                for(auto it:compo){
                    sizeTotal+=ds.size[it];
                }
                mx=max(mx,sizeTotal);
            }
        }

        for(int i =0;i<n*n;i++){
            mx = max(mx,ds.size[ds.findParent(i)]);
        }
        return mx;

    }
};