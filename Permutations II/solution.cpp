class Solution {
public:
    void solve(vector<int>nums,int index,set<vector<int>> &ans){
            // base case
            if(index>=nums.size()){
                ans.insert(nums);
                return;
            }

            for(int i = index ; i<nums.size();i++){
                swap(nums[i],nums[index]);
                solve(nums,index+1,ans);
                swap(nums[i],nums[index]);
            }

        }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        int index = 0;
        solve(nums,index,ans);
        vector<vector<int>> arr(ans.begin(),ans.end());
        
        return arr;
    }
};