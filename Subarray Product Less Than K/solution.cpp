class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int prod = 1;
        if(k<=1) return 0;
        int r = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            prod*=nums[i];
            while(r<n && prod>=k){
                prod = prod / nums[r];                                                    
                r++;
            }
            if((i-r+1)>0){
                ans+=(i-r+1);
            }
            
        }
        return ans;
    }
};