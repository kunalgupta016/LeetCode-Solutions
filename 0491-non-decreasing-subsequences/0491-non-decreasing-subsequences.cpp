class Solution {
public:
    void solve(vector<vector<int>> &ans , vector<int>&crr,int start, vector<int>&nums)
{
        if (crr.size() >= 2) {
            ans.push_back(crr);
        }
        unordered_set<int> used;
        for (int i = start; i < nums.size(); i++) {

            if (used.count(nums[i]))
                continue;

            used.insert(nums[i]);
            if (crr.empty() || nums[i] >= crr.back()) {
                crr.push_back(nums[i]);
                solve(ans, crr, i + 1, nums);
                crr.pop_back();
            }
        }



}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> crr;
        solve(ans, crr, 0, nums);
        return ans;
    }

};