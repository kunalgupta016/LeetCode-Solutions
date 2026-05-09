class Solution {
public:

    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        int top = 0;
        int left = 0;
        int bottom = m - 1;
        int right = n - 1;

        while (top < bottom && left < right) {

            vector<int> layer;

            
            for (int i = left; i <= right; i++) {
                layer.push_back(grid[top][i]);
            }

            
            for (int i = top + 1; i <= bottom - 1; i++) {
                layer.push_back(grid[i][right]);
            }

            
            for (int i = right; i >= left; i--) {
                layer.push_back(grid[bottom][i]);
            }

            
            for (int i = bottom - 1; i >= top + 1; i--) {
                layer.push_back(grid[i][left]);
            }

            int sz = layer.size();

            vector<int> rotated(sz);

            for (int i = 0; i < sz; i++) {
                rotated[i] = layer[(i + k) % sz];
            }

            int idx = 0;

            
            for (int i = left; i <= right; i++) {
                grid[top][i] = rotated[idx++];
            }

            
            for (int i = top + 1; i <= bottom - 1; i++) {
                grid[i][right] = rotated[idx++];
            }

            
            for (int i = right; i >= left; i--) {
                grid[bottom][i] = rotated[idx++];
            }

            
            for (int i = bottom - 1; i >= top + 1; i--) {
                grid[i][left] = rotated[idx++];
            }

            top++;
            left++;
            bottom--;
            right--;
        }

        return grid;
    }
};