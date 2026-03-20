class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt = 0;
        long long ans = 0;
        for(char ch:s){
            if(ch=='1') cnt++;
            else ans+=cnt;
        }

        return ans;


    }
};