class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ref=k;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==ref){ref+=k;}
            else if(nums[i]>ref){return ref;}
        }
        return ref;
    }
};