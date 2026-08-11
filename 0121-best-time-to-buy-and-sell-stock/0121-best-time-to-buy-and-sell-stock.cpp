class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int mini = INT_MAX;
        for(int i:prices){
            mini = min(mini,i);
            diff = max(diff,i-mini);

        }
        return diff;
    }
};