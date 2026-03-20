class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans = 0;
        int n = nums.size();
        for(int i = n/3;i<=nums.size()-2;i+=2){
            ans+=nums[i];
        }
        return ans;
    }
};