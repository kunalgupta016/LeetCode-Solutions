class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        const int MOD = 12345;

        vector<long long> arr;
        for(auto &i:grid){
            for (auto& j : i) {
                arr.push_back(j);
            }
        }

        long long size = arr.size();
        vector<long long> prefix(size,1),suffix(size,1);
        for(int i =1;i<size;i++){
            prefix[i] = (prefix[i - 1] * arr[i - 1]) % MOD;
        }
        for(int i =size-2;i>=0;i--){
            suffix[i] = (suffix[i + 1] * arr[i + 1]) % MOD;
        }
        int k = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                grid[i][j] = (prefix[k]*suffix[k])%MOD;
                k++;
            }
        }
        return grid;
    }
};