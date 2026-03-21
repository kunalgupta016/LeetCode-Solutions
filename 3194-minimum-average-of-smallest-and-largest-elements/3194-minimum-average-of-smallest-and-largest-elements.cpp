class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double ans=INT_MAX;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            double a = (nums[i]+nums[n-i-1])/2.0;
            ans = min(a,ans);
        }
        return ans;
    }
};