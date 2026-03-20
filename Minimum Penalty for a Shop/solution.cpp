class Solution {
public:
    int bestClosingTime(string s) {
        int best =  0;
        int penalty = 0;
        int p =0;
        for(int i = 0;i<s.size();i++){
            p+=s[i]=='Y'?-1:1;
            if(p<penalty){
                best = i+1;
                 penalty = p ;
            }
        }
        return best;
    }
};