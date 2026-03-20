class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0;
        int prev = 0;
        int crr = 1;
        for(int i =1;i<s.size();i++){
            if(s[i-1]==s[i]){
                crr++;
            }
            else{
                ans +=min(prev,crr);
                prev = crr;
                crr = 1;
            }
        }
        ans+=min(prev,crr);
        return ans;
    }
};