class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long sum = 0;
        for(auto &row:grid){
            for(int x:row){
                sum+=x;
            }
        }
        if(sum%2) return false;
        sum = sum/2;
        long long t = 0;
        for(int i =0;i<n-1;i++){
            for(int j=0;j<m;j++){
                t+=grid[i][j];
            }
            if(t==sum) return true;
        }
        t = 0;
        for(int j =0;j<m-1;j++){
            for(int i=0;i<n;i++){
                t+=grid[i][j];
            }
            if(t==sum) return true;
        }
        return false;
    }
};