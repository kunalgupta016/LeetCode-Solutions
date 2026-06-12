class Solution {
public:
    
    int helper(vector<int>&coins,int rem , vector<int>&dp){

        if(rem==0) return 0;
        if(rem<0) return INT_MAX;

        if(dp[rem]!=-2) return dp[rem];
        int ans = INT_MAX;
        for(int coin:coins){
            int res = helper(coins,rem-coin,dp);
            if(res!=INT_MAX){
                ans = min(ans,1+res);
            }
        }

        return dp[rem] = ans;

    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-2);
        int res =  helper(coins,amount,dp);
        return res==INT_MAX?-1:res;
    }



};