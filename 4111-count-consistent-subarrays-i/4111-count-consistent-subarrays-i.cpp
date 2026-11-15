class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            int mini = INT_MAX;
            int val = nums[i];
            for(int j = i;j<nums.size();j++){
                mini = min(mini,nums[j]);
                val = val&nums[j];
                if(val==mini){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};