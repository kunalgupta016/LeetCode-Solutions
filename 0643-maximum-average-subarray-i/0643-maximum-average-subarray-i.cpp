class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        // initialize sum 
        double sum = 0;
        for(int i = 0;i<k;i++){
            sum = sum+nums[i];
        }
        double maxSum = (double)(sum/k);
        int l = 0;
        int r = k;
        while(r<n){
            
            int newRight = nums[r];
            sum = sum + newRight;
            int leftElement = nums[l];
            sum = sum - leftElement;
            l++;
            r++;
            maxSum = max(maxSum , (double)(sum/k));
        }
        return maxSum;

    }
};