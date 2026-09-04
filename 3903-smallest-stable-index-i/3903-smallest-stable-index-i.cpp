class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            int maxEle = *max_element(nums.begin(),nums.begin()+i);
            int minEle = *min_element(nums.begin()+i,nums.end());
            int instability = maxEle - minEle;
            if(instability<=k){
                mini = min(mini,i);
            }
        }
        if(mini==INT_MAX){
            return -1;
        }else{
            return mini;
        }
    }
};