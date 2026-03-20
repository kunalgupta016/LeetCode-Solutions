class Solution {
public:
    int smallestNumber(int n) {
        int digit = 1;
        
        while(digit<n){
            digit = digit*2+1;
        }
        return digit;
    }
};