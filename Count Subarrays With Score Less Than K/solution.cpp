class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans = 0;
        long long left = 0;
        long long sum = 0;
        long long n = nums.size();
        for(long long right = 0;right<n;right++){
            sum+=nums[right];
            while(sum*(right-left+1)>=k){
                sum-=nums[left];
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};