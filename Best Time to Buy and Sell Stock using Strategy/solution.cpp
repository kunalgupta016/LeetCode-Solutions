class Solution {
public:



    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        
        int n = strategy.size();
        
        vector<long long> p1(n), p2(n);

        for(int i = 1;i<n;i++){
            p1[i] = p1[i-1] + prices[i];
        }


        p2[0] = prices[0]*strategy[0];

        for(int i = 1;i<n;i++){
            p2[i] = p2[i-1] + (prices[i]*strategy[i]);
        }

        long long maxi = p2[n-1];
        
        for(int i = 0;i<=n-k;i++){
            long long profit = 0;
            if(i-1>=0){
                profit+=p2[i-1];
            }

            if(i+k<n){
                profit+=p2[n-1] -p2[i+k-1];
            }

            int s = i;
            int e = i+k-1;

            profit+=p1[e] - p1[e-k/2];
            maxi = max(maxi,profit);

        }
        return maxi;

    }
};