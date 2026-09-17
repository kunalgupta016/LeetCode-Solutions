class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        double maxSum = INT_MIN;
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        maxSum = max(maxSum,(double)(sum/k));
        int l = 0;
        int r = k;
        while(r<n){
            sum+=nums[r++];
            sum-=nums[l++];
            maxSum = max(maxSum,(double)(sum/k));
        }
        return maxSum;
    }
};