class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char,int> mp;
        unordered_map<char,int> fI;
        string str = "aeiou";
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            if(str.find(ch)!=string::npos){
                mp[ch]++;
                if(fI.find(ch)==fI.end()){
                    fI[ch] = i;
                }
            }
            
        }

        vector<char> v;
        for(auto &it : mp){
            v.push_back(it.first);
        }        
        sort(v.begin(),v.end(),[&](char a, char b){
            if(mp[a]==mp[b]) return fI[a]<fI[b];
            return mp[a]>mp[b];
        });

        string sorted = "";
        for(char ch:v){
            sorted+=string(mp[ch],ch);
        }
        

        int j = 0;
        for(int i =0;i<s.size();i++){
            if(str.find(s[i])!=string::npos){
                s[i] = sorted[j++]; 
            }
        }
        return s;
    }
};