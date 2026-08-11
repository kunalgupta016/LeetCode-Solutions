class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();    
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }
        for(int i = 0;i<n;i++){
            int val = nums[i];
            int need = target-val;
            if(mp.count(need)){
                if(mp[target-val]==i) continue;
                return {i,mp[target-val]};
            }
        }
        return {};
    }
};