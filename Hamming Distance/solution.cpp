class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x^y;
        // int cnt = 0;
        // while(ans){
        //     ans&=(ans-1);
        //     cnt++;
        // }
        // return cnt;

        return __builtin_popcount(ans);



    }
};