class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        string ans = "";
        for(int i = 0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                if(  ((s[i]-'0')==mp[s[i]]) && ((s[i+1]-'0')==mp[s[i+1]])  ){
                    ans.push_back(s[i]);
                    ans.push_back(s[i+1]);
                    return ans;
                }
            }
        }

        return ans;

    }
};