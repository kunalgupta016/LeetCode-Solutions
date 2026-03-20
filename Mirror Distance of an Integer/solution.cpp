class Solution {
public:
    int mirrorDistance(int n) {
        int num = n;
        int reverse=0;
        while(num>0){
            int digit = num%10;
            reverse = reverse*10 + digit;
            num = num/10;
        }
        return abs(reverse-n);

        
    }
};