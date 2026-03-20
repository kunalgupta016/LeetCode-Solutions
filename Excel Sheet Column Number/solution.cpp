class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char c:columnTitle){
            int n = c-'A'+1;
            ans = ans*26+n;
        }
        return ans;
    }
};