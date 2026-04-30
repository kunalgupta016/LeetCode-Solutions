class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx = nums.size()/2;
        int cnt = 0;
        for(int i = 0;i<idx;i++){
            cnt+=nums[idx]-nums[i];
        }
        for(int j = idx+1;j<nums.size();j++){
            cnt+=nums[j]-nums[idx];
        }
        return cnt;
    }
};