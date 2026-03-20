class Solution {
public:
    int minimumMoves(string s) {
        int ans = 0;
        int i = 0;
        int n = s.size();
        while(i<n){
            if(s[i]=='X') {
                ans++;
                i+=3;
            }else i++;
        }
        return ans;
    }
};