class Solution {
public:
    int findComplement(int num) {
        int k  = 31 - __builtin_clz(num);
        long long b = (1LL << (k + 1)) - 1;
        return b-num;

    }
};