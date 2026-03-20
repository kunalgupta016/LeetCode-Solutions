class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        vector<int> ans(n,0);
        while(i<n){
            if(ans[nums[i]]==0){
                ans[nums[i]] = nums[i];
            }
            else{
                break;  
            }
            i++;
        }
        return nums[i];
    }
};