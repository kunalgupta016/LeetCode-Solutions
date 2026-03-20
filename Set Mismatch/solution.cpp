class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
            sum+=it;
        }
        vector<int> ans;
        int dup = -1;
        for(auto it:mp){
            if(it.second==2) {
                dup = it.first;
                ans.push_back(it.first);
                break;
                }
        }
        int n = nums.size();
        int res = (n * (n+1))/2;
        int v = abs(res-(sum-dup));
        ans.push_back(v);
        return ans;

    }
};