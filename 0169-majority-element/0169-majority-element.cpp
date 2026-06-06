class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi = -1;
        int votes = 0;
        for(int i = 0;i<nums.size();i++ ){
            if(votes==0){
                candi = nums[i];
                votes = 1;
            }else {if(candi == nums[i]){
                votes++;
            }else{
                votes--;
            }}
        }
        int cnt = 0;
        for(int i :nums){
            if(i==candi)cnt++;
            
        }
        if(cnt>(nums.size()/2)) return candi;
        return -1;
    }
};