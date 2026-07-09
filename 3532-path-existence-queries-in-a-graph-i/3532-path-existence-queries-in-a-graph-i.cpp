class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> cmp(n);
        for(int i = 1;i<n;i++){
            cmp[i] = cmp[i-1];
            if(nums[i]-nums[i-1]>maxDiff){
                cmp[i]++;
            }
        }
        vector<bool> res;
        for(auto q:queries){
            res.push_back(cmp[q[0]]==cmp[q[1]]);
        }
        return res;
    }
};