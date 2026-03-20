class Solution {
public:
    void solve(vector<int>& candidates, int index, vector<vector<int>>& ans,
               vector<int>& output, int sum) {

        if (sum == 0) {
            ans.push_back(output);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
            }
            if (candidates[i] > sum)
                break;
            int ele = candidates[i];
            output.push_back(ele);
            solve(candidates, i + 1, ans, output, sum - ele);
            output.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        // set<vector<int>> st;
        vector<int> output;
        solve(candidates, 0, ans, output, target);
        return ans;
    }
};