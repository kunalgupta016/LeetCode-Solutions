class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(m<=k && n<=k) return 0;
        if(m<=k){
            return 1LL * k*(n-k);
        }
        else if(n<=k){
            return 1LL * k*(m-k);
        }
        else{
            return -1;
        }
    }
};