class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int crrSum = 0;
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(sum<crrSum) break;
            sum-=nums[i];
            crrSum+=nums[i];
            arr.push_back(nums[i]);
        }
        return arr;

    }
};