class Solution {
public:
    bool checkRecord(string s) {
        int cntA = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='A') cntA++;
            if(s[i]=='L'){
                if(i+1<s.size() && s[i+1]=='L'){
                    if(i+2<s.size() && s[i+2]=='L'){
                        return false;
                    }
                }
            }
        }
        if(cntA>=2) return false;
        return true;
    }
};