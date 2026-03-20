class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> minPrefix(k,LLONG_MAX);
        long long phla = 0;
        long long ans = LLONG_MIN;
        minPrefix[0] = 0;

        for(int i = 0;i<n;i++){
            phla += nums[i];
            int mod = (i+1)%k;
            if(minPrefix[mod]!=LLONG_MAX){
                ans = max(ans,phla-minPrefix[mod]);
            }
            minPrefix[mod] = min(minPrefix[mod],phla);
            
        }
        return (ans==LLONG_MIN)?0:ans;
    }
};