class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int cntZero = 0;
        int maxOne = 0;
        int r = 0;
        int l = 0;
        while(r<n){

            if(nums[r]==0){
                cntZero++;
            }

            while(cntZero>k){

                if(nums[l]==0){
                    cntZero--;
                }

                l++;

            }

            maxOne = max(maxOne,r-l+1);
            r++;
        }
        return maxOne;
    }
};