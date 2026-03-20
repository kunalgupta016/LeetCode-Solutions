class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int num = 101;
        int digit = 0;
        for(int i = 0;i<nums.size();i++){
            digit = (digit*2 + nums[i])%5;
            if(digit%num == 0){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};