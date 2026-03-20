class Solution {
public:

    bool is_prime(int x){
        if(x<2)  return 0;
        for(int i = 2;i*i<=x;i++){
            if(x%i==0) return 0;
        }
        return 1;
    }



    int largestPrime(int n) {
        if(n==1) return 0;
        int ans = 2;
        int x = 3;
        int res = 2;
        while(ans<=n){
            if(is_prime(ans)) res = max(res,ans);
            if(is_prime(x)) ans+=x;
            x++;
        }
        return res;      
    }
};