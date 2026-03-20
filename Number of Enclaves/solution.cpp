class Solution {
public:
    void dfs(int r, int c, int n, int m, vector<vector<int>>& grid) {
        if (r < 0 || c < 0 || r >= n || c >= m || grid[r][c] == 0)
            return;
        grid[r][c] = 0;
        dfs(r, c + 1, n, m, grid);
        dfs(r, c - 1, n, m, grid);
        dfs(r + 1, c, n, m, grid);
        dfs(r - 1, c, n, m, grid);
    }


    int numEnclaves(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 1)
                dfs(i, 0, n, m, board);
            if (board[i][m - 1] == 1)
                dfs(i, m - 1, n, m, board);
        }

        for (int j = 0; j < m; j++) {
            if (board[0][j] == 1)
                dfs(0, j, n, m, board);
            if (board[n - 1][j] == 1)
                dfs(n - 1, j, n, m, board);
        }



        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 1) {
                    cnt++;
                    
                } 
            }
        }
        return cnt;
    }
};