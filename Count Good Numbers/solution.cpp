class Solution {
public:
const int MOD = 1e9 + 7;
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;

        long long odd = (n)/2;

        long long evenW = mypow(5,even);
        long long oddW = mypow(4,odd);
        return (evenW * oddW)%MOD;
    }
    long long mypow(long long x,long long y){
        if(y==0){
            return 1;
        }
        x = x%MOD;
        if(y%2==0){
            return mypow((x*x)%MOD,y/2)%MOD;
        }
        else{
            return x*mypow(x,y-1)%MOD;
        }
    }
    
};