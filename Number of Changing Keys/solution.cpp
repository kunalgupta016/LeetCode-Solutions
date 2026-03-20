class Solution {
public:
    int countKeyChanges(string s) {
        int cnt = 0;
        for(int i = 0;i<s.size()-1;i++){
            if(tolower(s[i+1])!=tolower(s[i])){
                cnt++;
            }
        }
        return cnt;
    }
};