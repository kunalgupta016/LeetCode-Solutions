class Solution {
    private:
    bool isValid(int newr,int newc,int n ){
        return newr>=0 && newr<n && newc>=0 && newc<n;
    }
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<vector<int> ,vector<vector<int>> , greater<vector<int>>> pq;
        vector<vector<int>> vis(n,vector<int>(n,0));
        pq.push({grid[0][0],0,0});
        vis[0][0] = 1;
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int ele = it[0];
            int r = it[1];
            int c = it[2];
            if(r==n-1 && c==n-1) return ele;
            for(int i = 0;i<4;i++){
                int newr = r + dr[i];
                int newc = c + dc[i];
                if(isValid(newr,newc,n)){
                    if(!vis[newr][newc]){
                        vis[newr][newc]=1;
                        pq.push({max(ele,grid[newr][newc]),newr,newc});
                    }
                }
                
            }

        }
        return -1;
    }
};