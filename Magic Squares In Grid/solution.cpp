class Solution {

private:
    bool check(vector<vector<int>>& grid, int i, int j, int n, int m) {
    
    if (i + 2 >= n || j + 2 >= m) return false;

    
    vector<int> count(10, 0); 
    for (int r = i; r < i + 3; r++) {
        for (int c = j; c < j + 3; c++) {
            int val = grid[r][c];
            if (val < 1 || val > 9 || ++count[val] > 1) 
                return false; 
        }
    }

    
    for (int r = i; r < i + 3; r++) {
        if (grid[r][j] + grid[r][j+1] + grid[r][j+2] != 15) return false;
    }

    
    for (int c = j; c < j + 3; c++) {
        if (grid[i][c] + grid[i+1][c] + grid[i+2][c] != 15) return false;
    }

    
    int d1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
    int d2 = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];
    
    return (d1 == 15 && d2 == 15);
}


public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check(grid, i, j, n, m)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};