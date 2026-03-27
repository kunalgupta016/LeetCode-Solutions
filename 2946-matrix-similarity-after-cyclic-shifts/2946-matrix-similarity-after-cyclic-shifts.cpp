class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat[0].size();
        k = k%n;
        vector<vector<int>> temp = mat;
        for(int i = 0;i<mat.size();i++){
            if(i&1){
                rotate(mat[i].begin(),mat[i].begin()+(n-k),mat[i].end());
            }else{
                rotate(mat[i].begin(),mat[i].begin()+(k),mat[i].end());
            }
        }
        return temp==mat;
        
    }
};