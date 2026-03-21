class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

        for(int j = y; j < y + k; j++) { 
            int t = x;
            int b = x + k - 1;

            while(t < b) {
                swap(grid[t][j], grid[b][j]);
                t++;
                b--;
            }
        }

        return grid;
    }
};