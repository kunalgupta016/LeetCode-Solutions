class Solution {
public:


    void solve(vector<int>ans,vector<vector<int>>&result,vector<int>&nums,int i){
        result.push_back(ans);
        for(int j = i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]) continue;
            ans.push_back(nums[j]);
            solve(ans,result,nums,j+1);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> result;
        vector<int> ans;
        solve(ans,result,nums,0);
        return result;
    }
};