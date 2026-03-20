class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> c(60);
        int cnt = 0;
        for(int t:time){
            cnt+=c[(600-t)%60];
            c[t%60]++;
        }
        return cnt;
    }
};