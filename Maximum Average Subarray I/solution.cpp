class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int sum = 0;
        
        for(j = 0;j<k;j++){
            sum+=nums[j];
        }
        double res = (double)sum/k;
        i = 0;
        while (j < n) {
            sum+=nums[j++];
            sum-=nums[i++];
            double d = (double)sum/k;
            res = max(d,res);
        }
        return res;
    }
};