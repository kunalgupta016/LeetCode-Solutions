class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string st:strs){
            string s = st;
            sort(s.begin(),s.end());
            mp[s].push_back(st);
        }

        vector<vector<string>> ans;
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};