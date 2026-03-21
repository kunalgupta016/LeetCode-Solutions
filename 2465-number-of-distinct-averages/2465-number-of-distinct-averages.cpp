class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n/2;i++){
            double a = (nums[i]+nums[n-i-1])/2.0;
            ans.insert(a);
        }
        return ans.size();
    }
};