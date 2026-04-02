class Solution {
public:
    int n, m;
    vector<vector<vector<int>>> dp;

    int solve(int i, int j, int k, vector<vector<int>>& coins) {
        if (i < 0 || j < 0)
            return -1e9;
        if (i == 0 && j == 0) {
            if (k == 0)
                return coins[0][0];
            return max(0, coins[0][0]);
        }
        if (dp[i][j][k] != INT_MIN)
            return dp[i][j][k];
        int ans = -1e9;
        // include
        ans = max(ans, coins[i][j] + solve(i - 1, j, k, coins));
        ans = max(ans, coins[i][j] + solve(i, j - 1, k, coins));

        // exclude
        if (k > 0) {
            ans = max(ans, solve(i - 1, j, k - 1, coins));
            ans = max(ans, solve(i, j - 1, k - 1, coins));
        }

        return dp[i][j][k] = ans;
    }

    int maximumAmount(vector<vector<int>>& coins) {
        n = coins.size();
        m = coins[0].size();

        dp.assign(n, vector<vector<int>>(m, vector<int>(3, INT_MIN)));

        int ans = -1e9;
        for (int k = 0; k < 3; k++) {
            ans = max(ans, solve(n - 1, m - 1, k, coins));
        }

        return ans;
    }
};