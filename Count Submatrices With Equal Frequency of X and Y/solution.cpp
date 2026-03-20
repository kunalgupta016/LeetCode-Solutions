class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<int> sumX(c,0);
        vector<int> sumY(c,0);

        int res = 0;

        for(int i = 0;i<r;i++){
            int rx =0;
            int ry = 0;
            for(int j = 0;j<c;j++){
                if(grid[i][j]=='X') rx++;
                else if(grid[i][j]=='Y') ry++;
                sumX[j]+=rx;
                sumY[j]+=ry;
                if(sumX[j]>0 && sumX[j]==sumY[j]) res++;
            }
        }

        return res;

    }
};