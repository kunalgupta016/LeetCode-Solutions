class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i] = i;
        }
        int n = nums.size();
        vector<int> ans;
        for(int i = 1;i<=n;i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};