class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        if(n<=1) return 0;
        int i = 0,j=1;
        while(j<n){
            if(nums[j]<=nums[j-1]){
                ans+=j-i;
                i = j;
                j++;
            }else{
                j++;
            }
        }
        return ans;
        
    }
};