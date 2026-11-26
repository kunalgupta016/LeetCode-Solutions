class Solution {
public:
    bool canAliceWin(int n) {
        int takes = 10;
        int moves = 0;
        while(n>=takes){
            n = n-takes;
            moves++;
            takes--;
        }
        return moves%2==1;
    }
};