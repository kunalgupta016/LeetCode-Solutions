class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto it:queries){
            int i = it[0];
            int n = it[1];
            int k = it[2];
            int p = it[3];
            for(int indx = i;indx<=n;indx+=k){
                nums[indx] = (1LL*nums[indx]*p)%(1000000000+7);
            }
        }

        int ans = 0;
        for(int i:nums) ans = ans^i;
        return ans;
    }
};