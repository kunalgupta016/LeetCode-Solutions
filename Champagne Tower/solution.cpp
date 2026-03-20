class Solution {
public:
    /*
    // memoization

    double solve(int p ,int r, int c, vector<vector<double>> &dp){
        if(r==0 && c==0) return p;
        if(c<0 || c>r) return 0;
        if(dp[r][c]!=-1) return dp[r][c];
        double left = max(0.0, (solve(p, r-1, c-1,dp) - 1) / 2.0);
        double right = max(0.0, (solve(p, r-1, c,dp) - 1) / 2.0);
        return dp[r][c] = left+right;

    }

    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> dp(101,vector<double>(101,-1));
        return min(1.0,solve(poured,query_row,query_glass,dp));

    }
    */

    // Tabulation


    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> dp(101,vector<double>(101,0.0));

        dp[0][0] = (double)poured;
        for(int r = 0;r<=query_row;r++){
            for(int c = 0;c<=r;c++){
                if(dp[r][c]>1.0){
                    double overflow = (dp[r][c]-1)/2.0;
                    dp[r][c] = 1.0;
                    dp[r+1][c]+=overflow;
                    dp[r+1][c+1]+=overflow;
                }
            }
        }

        return min(1.0,dp[query_row][query_glass]);

    }

};