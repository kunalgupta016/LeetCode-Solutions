class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int fd = INT_MIN;
        int ld= INT_MIN;
        int res = INT_MIN;
        int s = nums.size();
        for(int i=0;i<s-1;i++){
            fd = nums[i];
            ld = nums[i+1];
            int diff = abs(fd-ld);
            if(diff>res){
                res = diff;
            }
        }
        if(  (abs(nums[0]-nums[s-1])) >res ){
            res = abs(nums[0]-nums[s-1]);
        }
        return res;
        
    }
};