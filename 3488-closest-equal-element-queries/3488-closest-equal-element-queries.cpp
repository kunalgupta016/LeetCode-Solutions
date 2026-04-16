class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int, vector<int>> mp;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> ans;


        for (int q : queries) {
            vector<int>& v = mp[nums[q]];
            int sz = v.size();


            if (sz == 1) {
                ans.push_back(-1);
                continue;
            }


            int idx = lower_bound(v.begin(), v.end(), q) - v.begin();

            int left = v[(idx - 1 + sz) % sz];
            int right = v[(idx + 1) % sz];

            int res = INT_MAX;

            int distLeft = abs(q - left);
            res = min(res, min(distLeft, n - distLeft));


            int distRight = abs(q - right);
            res = min(res, min(distRight, n - distRight));

            ans.push_back(res);
        }

        return ans;
    }
};