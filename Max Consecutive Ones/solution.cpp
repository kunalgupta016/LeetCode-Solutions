class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                maxi = max(cnt,maxi);
                cnt=0;
                continue;
                
            }
            cnt++;
            
        }
        maxi = max(cnt,maxi);
        return maxi;
    }
};