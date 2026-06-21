class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int col=0;col<n;col++){
            ans[0][col] =1;
        }

        for(int row=1;row<m;row++){
            ans[row][n-1] =1;
        }

        vector<string> res;
        for(int i = 0;i<ans.size();i++){
            string s = "";
            for(int j = 0;j<ans[0].size();j++){
                if(ans[i][j]==1){
                    s.push_back('.');
                }else{
                    s.push_back('#');
                }
            }
            res.push_back(s);
        }
        return res;

    }
};