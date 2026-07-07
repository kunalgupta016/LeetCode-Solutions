class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long long sum = 0;
        while(n!=0){
            int digit = n%10;
            if(digit!=0){
                ans = ans*10+digit;
                sum+=digit;
            }
            n = n/10;
        }

        long long ans2 = 0;
        while(ans!=0){
            ans2 = ans2*10 + (ans%10);
            ans = ans/10;
        }

        return 1LL*ans2*sum;

    }
};