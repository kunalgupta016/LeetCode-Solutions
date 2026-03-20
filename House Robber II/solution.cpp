class Solution {
public:


    int houseRob(int idx,vector<int>&nums,vector<int>&dp){
        if(idx>=nums.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int include = houseRob(idx+2,nums,dp)+nums[idx];
        int exclude = houseRob(idx+1,nums,dp);
        return dp[idx] = max(include,exclude);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> arr(nums.begin(),nums.end()-1);
        
        int size1 = arr.size();
        vector<int> dp(size1,-1);
        int ans1 = houseRob(0,arr,dp);


        vector<int> brr(nums.begin()+1,nums.end());
        

        int size2 = brr.size();
        vector<int> dp1(size2,-1);
        int ans2 = houseRob(0,brr,dp1);

        
        return max(ans1,ans2);

    }
};