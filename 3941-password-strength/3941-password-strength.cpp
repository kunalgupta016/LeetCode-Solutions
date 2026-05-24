class Solution {
public:
    int passwordStrength(string password) {
        bool seen[256] = {false};
        int cnt = 0;
        for(auto it:password){
            char ch = it;
            if(seen[ch]){
                continue;

            }
            seen[ch]  = true;
            if (ch >= 'a' && ch <= 'z') {
                cnt += 1;
            }
            else if (ch >= 'A' && ch <= 'Z') {
                cnt += 2;
            }
            else if (ch >= '0' && ch <= '9') {
                cnt += 3;
            }
            else if(ch=='!' || ch=='@' || ch=='#' || ch=='$'){
                cnt+=5;
            }
        }
        return cnt;
    }
};