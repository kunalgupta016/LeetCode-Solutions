
class Solution {
public:
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& visited,
             int n, int m, int i, int j, bool& ans) {

        if(i < 0 || j < 0 || i >= n || j >= m) {
            ans = false;
            return;
        }

        if(grid[i][j] == 1 || visited[i][j] == 1) {
            return;
        }

        visited[i][j] = 1;

        dfs(grid, visited, n, m, i-1, j, ans);
        dfs(grid, visited, n, m, i+1, j, ans);
        dfs(grid, visited, n, m, i, j-1, ans);
        dfs(grid, visited, n, m, i, j+1, ans);
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 0 && visited[i][j] == 0) {
                    bool flag = true;

                    dfs(grid, visited, n, m, i, j, flag);

                    if(flag) {
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};
