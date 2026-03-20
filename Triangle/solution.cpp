class Solution {
public:
    int f(int i, int j, vector<vector<int>>& a, vector<vector<int>>& dp,
          int n) {
        if (i == n - 1)
            return a[n - 1][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        int b = a[i][j] + f(i + 1, j, a, dp, n);
        int br = a[i][j] + f(i + 1, j + 1, a, dp, n);
        return dp[i][j] = min(b, br);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int>front(n,0),crr(n,0);
        for (int j = 0; j < n; j++)
            front[j] = triangle[n - 1][j];
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i; j >= 0 ;j --) {
                int b = triangle[i][j] + front[j];
                int br = triangle[i][j] + front[j+1];
                crr[j] = min(b,br);
            }
            front = crr;
        }
        return front[0];
    }
};