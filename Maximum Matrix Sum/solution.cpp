class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long neg = 0;
        long long sum = 0;
        long long mini = INT_MAX;
        for(auto i:matrix){
            for(auto j:i){
                if(j<0) neg++;
                long long ab = abs(j);
                mini = min(ab,mini);
                sum+=ab;
            }
        }
        return (neg&1)?sum-2*mini:sum;
    }
};