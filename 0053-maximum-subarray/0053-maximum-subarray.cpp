class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi = INT_MIN;
        long long sum = 0;
        for(int i:nums){
            sum+=i;
            if(sum>maxi) maxi = sum;
            if(sum<0) sum = 0;

        }
        return maxi;
    }
};