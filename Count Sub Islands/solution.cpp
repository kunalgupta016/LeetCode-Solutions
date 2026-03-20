class Solution {
public:
    int n, m;

    void dfs(int i, int j, vector<vector<int>>& grid2) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid2[i][j] == 0)
            return;

        grid2[i][j] = 0;
        dfs(i - 1, j, grid2);
        dfs(i + 1, j, grid2);
        dfs(i, j - 1, grid2);
        dfs(i, j + 1, grid2);
    }

    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        n = grid1.size();
        m = grid1[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid1[i][j] == 0 && grid2[i][j] == 1) {
                    dfs(i, j, grid2);
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid2[i][j] == 1) {
                    dfs(i, j, grid2);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};