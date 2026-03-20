class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i :nums){
            sum+=i;
        }

        long long mini = INT_MAX;
        long long ans = INT_MIN;
        for(long long i = n-1;i>=1;i--){
            sum = sum - nums[i];
            if(nums[i]<mini){
                mini = nums[i];
            }
            long long x = sum - mini; 
            ans = max(ans,x);
        }

        return ans;

        
        
    }
};