class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        map<int,vector<long long>> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int n = nums.size();
        vector<long long> ans(n);
        for(auto &it:mp){

            vector<long long>v = it.second;
            int m = v.size();
            vector<long long> prefix(m);

            prefix[0] = v[0];
            for(int i = 1;i<m;i++){
                prefix[i] = prefix[i-1]+v[i];
            }
            for(int i = 0;i<m;i++){
                long long left = 0;
                long long right = 0;
                if(i>0){
                    left = (long long)i*v[i] - prefix[i-1];
                }
                if(i<m-1){
                    right = (prefix[m-1]-prefix[i]) - (long long)(m-i-1)*v[i];
                }
                ans[v[i]] = left+right;
            }



        }
        return ans;
    }
};