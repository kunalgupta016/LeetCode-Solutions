class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        double res = 1.0;
        if(exp <0){
            x = 1/x;
            exp = -exp;
        }

        while(exp>0){
            if(exp&1){
                res = res*x;
            }
            x = x*x;
            exp = exp>>1;
        }
        return res;
    }
};