class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int n = grid.size();
        int expectSum = ((n*n)*(n*n+1))/2;
        int sum = 0;
        for(auto i:grid){
            for(auto j:i){
                mp[j]++;
                sum+=j;
            }
        }
        int a = 0;
        for(auto it:mp){
            if(it.second==2){
                a = it.first;
                break;
            }
        }
        sum = sum-a;
        int b = expectSum-sum;
        return {a,b};

    }
};