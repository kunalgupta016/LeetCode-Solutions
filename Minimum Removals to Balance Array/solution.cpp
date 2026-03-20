class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int i = 0;
        int n = nums.size();
        int ans = n;
        
        for(int j = 0;j<n;j++){
            while(nums[j]>1LL*nums[i]*k){
                i++;
            }
            ans = min(ans,n-(j-i+1));

        }
        return ans;
    }
};