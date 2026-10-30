class Solution {
public:
    bool isMatch(string s, string p) {
        int si = 0;
        int pi = 0;

        int match = 0;
        int star = -1;

        int sn = s.size();
        int pn = p.size();

        while(si<sn){

            if(pi<pn && p[pi]==s[si] || p[pi]=='?'){
                si++;
                pi++;
            }

            else if(pi<pn && p[pi]=='*'){
                star = pi;
                match = si;
                pi++;
            }
            else if(star!=-1){
                pi = star+1;
                match++;
                si = match;
            }
            else {
                return false;
            }

        }
        while(pi<pn && p[pi]=='*'){
            pi++;
        }
        return pi==pn;
        
    }
};