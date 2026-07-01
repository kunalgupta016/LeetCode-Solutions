class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(m*n!=r*c) return mat;
        vector<vector<int>> reshaped(r,vector<int>(c));
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                reshaped[cnt/c][cnt%c] = mat[i][j];
                cnt++;
            }
        }
        return reshaped;

    }
};