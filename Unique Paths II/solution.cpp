class Solution {
public:

    int solve(int i ,int j , vector<vector<int>> &grid){
        if(i<0 || j<0 || grid[i][j]==0) return 0;
        if(i==0 && j==0) return 1;
        
        if(grid[i][j]!=-1) return grid[i][j];
        int left = solve(i,j-1,grid);
        int top = solve(i-1,j,grid);
        return grid[i][j] = left+top;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m= obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j] = 0;
                }
            }
        }
        
        return solve(n-1,m-1,dp);
    }
};