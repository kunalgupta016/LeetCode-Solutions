class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxi = 0;
        int mini = 0;
        int n = nums.size();
        for(int i = 0;i<k;i++){
            maxi = maxi+nums[n-i-1];
            mini = mini + nums[i];
            
        }
        return maxi-mini;
    }
};