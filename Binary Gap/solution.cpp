class Solution {
public:
    int binaryGap(int n) {
        
        int t = __builtin_ctz(n);
        n = n>>t;
        if(n==1) return 0;
        int maxgap = 0;
        int gap = 0;
        while(n){
            if(n&1){
                maxgap = max(gap,maxgap);
                gap = 0;
            }else{
                gap++;
            }
            n = n>>1;
        }
        return maxgap+1;

    }
};