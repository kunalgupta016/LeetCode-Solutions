class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<int> ans;
        for(int i = 0;i<n;i++){
            int in = 0;
            int ou = 0;
            for(int j = 0;j<n;j++){
                if(matrix[i][j]==1){
                    ou++;
                }
                if(matrix[j][i]==1){
                    in++;
                }
            }
            // ans.push_back(in);
            ans.push_back(ou);
        }
        return ans;
    }
};