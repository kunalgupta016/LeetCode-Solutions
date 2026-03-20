class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        map<int,int> oneRow;
        map<int,int> oneCol;
        map<int,int> zeroRow;
        map<int,int> zeroCol;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==0){
                    zeroRow[i]++;
                    zeroCol[j]++;
                }else{
                    oneRow[i]++;
                    oneCol[j]++;
                }
            }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                grid[i][j] = oneRow[i]+oneCol[j]-zeroRow[i]-zeroCol[j];
            }
        }
        return grid;

    }
};