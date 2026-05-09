class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int t = 0;
        int l = 0;
        int b = grid.size()-1;
        int r = grid[0].size()-1;

        while(t<b && l<r){

            int len = b-t;
            int wid = r-l;
            int p = 2*len + 2*wid;
            int j = k%p;
            while(j--){

                int temp = grid[t][l];


                for(int i = l;i<r;i++){
                    grid[t][i] = grid[t][i+1];
                }

                for(int i = t;i<b;i++){
                    grid[i][r] = grid[i+1][r];
                }

                for(int i = r;i>l;i--){
                    grid[b][i] = grid[b][i-1];
                }

                for(int i = b;i>t;i--){
                    grid[i][l] = grid[i-1][l];
                }
                grid[t+1][l] = temp;

            }
            t++;
            l++;
            b--;
            r--;

        }
        return grid;
    }
};