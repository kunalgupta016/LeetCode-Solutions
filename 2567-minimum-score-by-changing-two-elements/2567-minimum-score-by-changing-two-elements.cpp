class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<4){
            return 0;

        }

        sort(nums.begin(),nums.end());
        int ans1 = nums[n-3]-nums[0];
        int ans2 =nums[n-2] - nums[1];
        int ans3 = nums[n-1]-nums[2];
        
        return min(ans1,min(ans2,ans3));
    }
};