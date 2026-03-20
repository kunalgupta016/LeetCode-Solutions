class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int total = row*col;
        int count = 0;
        int firstRow = 0;
        int LastRow = row-1;
        int firstCol = 0;
        int LastCol  = col-1;

        while(count<total){

            for(int i = firstCol ;count<total && i<=LastCol ;i++){
                ans.push_back(matrix[firstRow][i]);
                count++;
            }
            firstRow++;
            for(int i = firstRow ;count<total && i<=LastRow ; i++){
                ans.push_back(matrix[i][LastCol]);
                count++;
            }
            LastCol--;
            for(int i = LastCol ;count<total && i>=firstCol ;i--){
                ans.push_back(matrix[LastRow][i]);
                count++;
            }
            LastRow--;
            for(int i =LastRow ;count<total &&i>=firstRow;i--){
                ans.push_back(matrix[i][firstCol]);
                count++;
            }
            firstCol++;
        }
    return ans;

    }
};