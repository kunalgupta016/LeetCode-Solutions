class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long diff = 0;
        long long mini = INT_MAX;
        for(int i:prices){
            if(mini>i){
                mini = i;
            }
            if(diff<(i-mini)){
                diff = i-mini;
            }
        }
        return diff;
    }
};