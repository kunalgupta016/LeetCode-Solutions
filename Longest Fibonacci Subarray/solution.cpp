class Solution {
public:
    int longestSubarray(vector<int>& nums) {


        int cnt = 2;
        int maxi = 2;
        
        for(int k = 2;k<nums.size();k++){
            if(nums[k] == (nums[k-1]+nums[k-2])){
                cnt++;
            }else{
                cnt = 2;
            }             
            maxi = max(cnt,maxi);
        }
        return maxi;
    }
};