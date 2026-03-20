class Solution {
public:
    bool scoreBalance(string s) {
        int sum = 0;
        for(char ch:s){
            sum+=ch-'a'+1;
        }
        int prefix = 0;
        for(int i = 0;i<s.size()-1;i++){
            prefix+=s[i]-'a'+1;
            if(prefix == sum-prefix){
                return true;
            }
        }
        return false;
    }
};