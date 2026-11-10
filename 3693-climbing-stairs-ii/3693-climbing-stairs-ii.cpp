class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(),0);
        int a = costs[n];
        int b = INT_MAX/2;
        int c = INT_MAX/3;
        
        for(int i = n-1;i>=0;i--){
            int crr  = costs[i] + min({a+1,b+4,c+9});
            c = b;
            b = a;
            a = crr;
        }

        return a;

    }
};