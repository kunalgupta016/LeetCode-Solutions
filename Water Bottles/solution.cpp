class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int khali =1;
        int bachi = 0;
        int cnt = numBottles;
        while(khali!=0){
            khali = numBottles/numExchange;
            bachi = numBottles%numExchange;
            cnt += khali;
            numBottles = khali+bachi;
            
        }
        return cnt;
    }
};