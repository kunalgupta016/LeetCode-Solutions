class Solution {
public:
    int minimumDeletions(string s) {
        int cnt = 0;
        int no_of_b = 0;
        for(auto ch:s){
            if(ch=='b') no_of_b++;
            else{
                if(no_of_b>0){
                    no_of_b--;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};