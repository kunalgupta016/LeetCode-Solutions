class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int f = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            f+=(i*nums[i]);
        }
        int maxi = f;
        for(int k = 0;k<=n-1;k++){
            int newF = f + sum - n*(nums[n-1-k]);
            maxi = max(maxi,newF);
            f = newF;

        }
        return maxi;
    }
};