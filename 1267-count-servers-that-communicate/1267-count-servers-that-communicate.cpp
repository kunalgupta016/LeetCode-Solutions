class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rowcount(n);
        vector<int> colcount(m);

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                    rowcount[i]++;
                    colcount[j]++;
                }
            }
        }

        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                    if(rowcount[i]>1 || colcount[j]>1){
                        ans++;
                    }
                }
            }
        }
        return ans;
        
    }
};