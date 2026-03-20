class Solution {
public:

    int solve(int i , vector<int>&dp , vector<int>&cost){
        if(i==0||i==1) return cost[i];
        if(dp[i]!=-1) return dp[i];
        int left = solve(i-1,dp,cost);
        int right = solve(i-2,dp,cost) ;
        return dp[i] = cost[i]+min(left,right);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(solve(n-1,dp,cost),solve(n-2,dp,cost));
    }
};