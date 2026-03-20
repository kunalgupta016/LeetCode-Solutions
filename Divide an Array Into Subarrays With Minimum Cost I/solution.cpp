class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int min1 = 50;
        int min2 = 50;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min1){
                min2 = min1;
                min1 = nums[i];
            }else if(nums[i]<min2){
                min2 = nums[i];
            }
        }
        return nums[0]+min1+min2;
    }
};