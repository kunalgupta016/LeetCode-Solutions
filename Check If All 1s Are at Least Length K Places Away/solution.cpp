class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
    
        int ans = 0;
        int i;
        for( i = 0;i<n;i++){
            if(nums[i]==1){
                ans = i;
                break;
            }
        }
        i++;
        int ans1 = 0;
        while(i<n){
            if(nums[i]==1){
                ans1 = i;
                if(  (ans1-ans-1)<k  ){
                    return false;
                }
                ans = i;
                
                
            }
            
                i++;
            
        }
        return true;

    }
};