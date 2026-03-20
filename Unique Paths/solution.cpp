class Solution {
public:

    int solve(int i ,int j , vector<vector<int>> &grid){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(grid[i][j]!=-1) return grid[i][j];
        int left = solve(i,j-1,grid);
        int top = solve(i-1,j,grid);
        return grid[i][j] = left+top;
    }


    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m,vector<int>(n,-1));
        return solve(m-1,n-1,grid);

    }
};