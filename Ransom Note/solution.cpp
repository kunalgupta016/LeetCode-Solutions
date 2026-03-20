class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r;
        unordered_map<char,int> m;
        for(auto &i:ransomNote){
            r[i]++;
        }
        for(auto &i:magazine){
            m[i]++;
        }

        for(auto &i:r){
            int freq = i.second;
            char ch = i.first;
            if(m.find(ch)==m.end()) return false;
            if(   m[ch]<freq){
                return false;
            }

        }
        return true;
    }
};