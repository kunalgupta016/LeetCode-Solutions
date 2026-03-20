class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        int a = 0, b = 1, c = 1;
        int nu;
        
       for(int i = 3;i<=n;i++){
            nu = a+b+c;
            a = b;
            b = c;
            c = nu;
       }
        return c;
    }
};