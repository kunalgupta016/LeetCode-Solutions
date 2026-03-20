class Solution {
public:

    int solve(vector<int>&nums,int target, int sum , int i){

        if(i>=nums.size()){
            if(sum==target){
                return 1;
            }
            return 0;
        }
        int p = solve(nums,target,sum+nums[i],i+1);
        int m = solve(nums,target,sum-nums[i],i+1);
        return p+m;


    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};