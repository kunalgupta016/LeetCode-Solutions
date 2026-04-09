class Solution {
public:

    int n;
    vector<vector<int>> dp;

    int solve(vector<int> &diff,int i ,int d){

        if(d==1){
            int maxi = 0;
            for(int k = i;k<n;k++){
                maxi = max(maxi,diff[k]);
            }
            return maxi;
        }

        if(dp[i][d]!=-1) return dp[i][d];

        int maxi = 0;
        int res = INT_MAX;
        for(int j = i;j<=n-d;j++){
            maxi = max(maxi,diff[j]);
            int next = solve(diff,j+1,d-1);
            res = min(maxi+next,res);
        }

        return dp[i][d] = res;

    }

    int minDifficulty(vector<int>& jobDifficulty, int d) {
        n = jobDifficulty.size();
        if(n<d){
            return -1;
        }
        
        dp.assign(n, vector<int>(d + 1, -1));
        return solve(jobDifficulty,0,d);
        
    }
};