class Solution {
public:
    bool checkDivisibility(int n) {
        // if(n==0) return false;
        int sum = 0;
        int product = 1;
        int number = n;
        while (n != 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n = n / 10;
        }
        int val = sum + product;
        if (number % val == 0) {
            return true;
        }
        return false;
    }
};