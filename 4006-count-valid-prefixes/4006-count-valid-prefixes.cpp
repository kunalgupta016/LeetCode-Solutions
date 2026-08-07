class Solution {
public:
    int countValidPrefixes(string s) {
        int balance =0;
        int ans = 0;
        for(char c :s){
            int num  = c-'0';
            balance = (num==1)?balance+1:balance-1;
            if(balance>=-1 && balance<=1){
                ans++;
            }
        }
        return ans;
    }
};