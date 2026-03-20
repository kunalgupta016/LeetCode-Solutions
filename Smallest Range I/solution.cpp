class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            maxi-=1;
            mini+=1;
            if(mini>=maxi) return 0;
        }
        return maxi-mini;
    }
};