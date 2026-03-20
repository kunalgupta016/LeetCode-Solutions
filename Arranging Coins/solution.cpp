class Solution {
public:
    int arrangeCoins(int n) {
        int r = n;
        int i = 1;

        while(r>=i){
            r-=i;
            i++;
        }
        return i-1;
    }
};