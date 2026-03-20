class Solution {
public:

    
    int concatenatedBinary(int n) {
        
        int bi = 0;
        long long res = 0;
        const int MOD = 1e9+7;
        for(int i =1;i<=n;i++){
            if((i&(i-1))==0) bi++;
            res = ((res<<bi)|i)%MOD;
        }
        return (int)res;
    }
};