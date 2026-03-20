class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int j=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 ){
                continue;
            }
             if(i+1<nums.size() && i!=0 && nums[i]==nums[i-1]){
                
                    continue;
                
            }
            
            else{
                if(nums[i]==j){
                    j++;
                }
                else{
                    break;
                }
            }
        }
        return j;
    }
};