class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            if(nums[i]==2) {ans[i] = -1;}
            else{
                int x = -1;
            int d = 1;
            int val = nums[i];
            while(val&d){
                x = val-d;
                d = d<<1;
            }
            ans[i] = x;   
            }
            
        }
        return ans;
    }
};