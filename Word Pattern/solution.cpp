class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        int n = pattern.size();
        unordered_map<char,string>mp;
        unordered_map<string,char> rev;
        int l = 0;
        int r = 0;
        string temp = "";
        s.push_back(' ');
        while(r<s.size()){
            
            if(s[r]==' '){
                if(temp.empty()) continue;
                if(l>=n) return false;
                char ch = pattern[l++];
                if (mp.count(ch) && mp[ch] != temp) return false;
                if (rev.count(temp) && rev[temp] != ch) return false;
                mp[ch] = temp;
                rev[temp] = ch;
                temp="";
            }else{
                temp+=s[r];
        
            }
            r++;
            
        }
        return l==n;

    }
};