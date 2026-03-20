class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        unordered_map<int,int> mp1;
        for(auto it:mp){
           mp1[it.second]++;
        }
        int ans = 0;
        for(auto it:nums){
            if(mp1[mp[it]]==1) return it;
        }
        
        return -1;
        
    }
};