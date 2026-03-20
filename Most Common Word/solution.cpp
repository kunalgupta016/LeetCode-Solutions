class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> mp;
        unordered_set<string> st(banned.begin(),banned.end());
        int i = 0;
        int n = paragraph.size();
        string word = "";
        while(i<n){
            char ch = paragraph[i];
            if(isalpha(ch)){
                word+=tolower(ch);
            }
            else{
                if(!word.empty() && !st.count(word)){
                    mp[word]++;
                }
                word = "";
            }
            i++;
        }
        if(!word.empty() && !st.count(word)){
                    mp[word]++;
                }
        int ans = 0;
        string res = "";
        for(auto it:mp){
            string w = it.first;
            int freq = it.second;
            if(freq>ans){
                res = w;
                ans = freq;
            }
        }
        return res;
    }
};