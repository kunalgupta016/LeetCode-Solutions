class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        long long sum = 0;
        unordered_map<int,int> mp;
        for(j = 0;j<k;j++){

           mp[nums[j]]++;
           sum+=nums[j];
            
        }
        long long maxi = 0;
        if(mp.size()==k){
            maxi = sum;
        }
        
        while (j < n) {
           sum = sum - nums[i];
           mp[nums[i]]--;
           if(mp[nums[i]]==0){
            mp.erase(nums[i]);
           }
           sum = sum + nums[j];
           mp[nums[j]]++;
           if(mp.size()==k){
            maxi = max(sum,maxi);
           }
           j++;
           i++;
        }
        return maxi;
    }
};