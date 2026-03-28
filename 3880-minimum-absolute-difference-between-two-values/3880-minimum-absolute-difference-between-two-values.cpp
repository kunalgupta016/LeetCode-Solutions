class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int cnt = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if((nums[i]==1 && nums[j]==2) || (nums[i]==2 && nums[j]==1)){

                    cnt = min(abs(i-j),cnt);

                }
            }
        }
        return (cnt==INT_MAX)?-1:cnt;
    }
};