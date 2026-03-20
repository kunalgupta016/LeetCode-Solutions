class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size()<p.size()) return ans;
        vector<int> freqP(26,0),freqS(26,0);
        for(char ch:p){
            freqP[ch-'a']++;
        }
        int k = p.size();
        for(int i = 0;i<k;i++){
            freqS[s[i]-'a']++;
        }
        if(freqS==freqP){
            ans.push_back(0);
        }
        for(int i = k;i<s.size();i++){
            freqS[s[i]-'a']++;
            freqS[s[i-k]-'a']--;
            if(freqP==freqS){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};