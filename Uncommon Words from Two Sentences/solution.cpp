class Solution {
public:

    void addWords(string s ,unordered_map<string,int>&mp){
        string temp = "";
        for(auto c:s){
            if(c==' '){
                mp[temp]++;
                temp = "";
            }
            else{
                temp+=c;
            }
        }
        mp[temp]++;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        addWords(s1,mp);
        addWords(s2,mp);
        vector<string> ans;
        for(auto it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;

    }
};