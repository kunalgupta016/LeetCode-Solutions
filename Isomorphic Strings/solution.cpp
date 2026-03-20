class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> mpst;
        unordered_map<char,char> mpts;

        for(int i = 0 ; i<s.size();i++){
            char ch1 = s[i];
            char ch2 = t[i];
            if(mpst.count(ch1) && mpst[ch1]!=ch2) return false;
            if(mpts.count(ch2) && mpts[ch2]!=ch1) return false;
            mpst[ch1] = ch2;
            mpts[ch2] = ch1;
        }
        return true;






    }
};