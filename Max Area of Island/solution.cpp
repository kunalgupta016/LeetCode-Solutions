class Solution {
public:

    void dfs(vector<vector<int>>& grid,vector<vector<int>>&vis,int &cnt,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0 || vis[i][j]==1){
            return;
        }
        cnt++;
        vis[i][j] = 1;
        dfs(grid,vis,cnt,i+1,j);
        dfs(grid,vis,cnt,i-1,j);
        dfs(grid,vis,cnt,i,j+1);
        dfs(grid,vis,cnt,i,j-1);

        
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int maxi = 0;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                int cnt = 0;
                if(vis[i][j]!=1){
                    dfs(grid,vis,cnt,i,j);
                }
                maxi = max(cnt,maxi);
            }
        }
        return maxi;
    }
};