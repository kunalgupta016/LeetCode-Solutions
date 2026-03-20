class Solution {
public:
    int empty = 0;
    int cnt = 0;
    void solve(int i ,int j , vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == -1)
            return;
        
        if(grid[i][j]==2){
            if(empty==0){
                cnt++;
            }
            return ;
        }
        grid[i][j] = -1;
        empty--;
        solve(i-1,j,grid);
        solve(i+1,j,grid);
        solve(i,j-1,grid);
        solve(i,j+1,grid);
        grid[i][j] = 0;
        empty++;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ex = 0;
        int ey = 0;
       
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    empty++;
                    
                }
                 if(grid[i][j]==1){
                    ex = i;
                    ey = j;
                }
                
            }
        }
        empty++;
        solve(ex,ey,grid);
        return cnt;

    }
};