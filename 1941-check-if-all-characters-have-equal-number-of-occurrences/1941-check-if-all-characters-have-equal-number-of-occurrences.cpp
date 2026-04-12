class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        auto f = *mp.begin();
        int ele = f.second;
        for(auto it:mp){
            if(it.second!=ele) return false;
        }
        return true;
    }
};