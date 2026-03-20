class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int diff = INT_MAX;
        for(int i = 1;i<nums.size();i++){
            int cdiff = nums[i] - nums[i-1];
            if(diff>cdiff){
                diff = cdiff;
                res = {};
                res.push_back({nums[i-1],nums[i]});
            }else if(diff == cdiff){
                res.push_back({nums[i-1],nums[i]});
            }

        }
        return res;
    }
};