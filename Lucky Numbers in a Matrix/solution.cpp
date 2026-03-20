class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,INT_MAX);
        vector<int> col(m,0);
        vector<int> ans;


        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                int ele = matrix[i][j];
                row[i] = min(row[i],ele);
                col[j] = max(col[j],ele);
             }
            
        }
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                int ele = matrix[i][j];
                if(ele == row[i] && ele==col[j]) ans.push_back(ele);
            }
            
        }
        
        return ans;
    }
};