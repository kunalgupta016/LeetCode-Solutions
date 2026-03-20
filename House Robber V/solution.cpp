class Solution {
public:

    long long house(vector<int>&nums,vector<int>&colors,int i ,vector<long long>&dp){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        long long maxi = 0;
        if(i-1>=0){
            if(colors[i]==colors[i-1]){
                maxi = max(maxi,house(nums,colors,i-2,dp)+nums[i]);
                maxi = max(maxi,house(nums,colors,i-1,dp));
            }
            else{
                maxi = max(maxi,house(nums,colors,i-1,dp)+nums[i]);
            }
        }else{
            maxi = max(maxi,house(nums,colors,i-1,dp)+nums[i]);
        }
        return dp[i] = maxi;
    }

    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        vector<long long> dp(n,-1);
        house(nums,colors,n-1,dp);
        return dp[n-1];
    }
};