class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int> mp;
        for(int i = 0;i<26;i++){
            mp[i+'a'] = weights[i];
        }
        unordered_map<int,char> mp1;
        for(int i = 0;i<26;i++){
            mp1[i] = 'z'-i;
        }
        string s = "";
        for(int i = 0;i<words.size();i++){
            int sum = 0;
            for(int j = 0;j<words[i].size();j++){
                char ch = words[i][j];
                sum+=mp[ch];
            }
            sum = sum%26;
            
            char chara = mp1[sum];
            
            s.push_back(chara);
        }
        return s;
    }
};