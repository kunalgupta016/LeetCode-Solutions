class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i :arr){
            mp[i]++;
        }
        unordered_map<int,int> mp1;
        for(auto it:mp){
            int freq = it.second;
            mp1[freq]++;
        }
        for(auto it:mp1){
            if(it.second>1) return false;
        }
        return true;
    }
};