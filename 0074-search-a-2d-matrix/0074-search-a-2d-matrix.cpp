class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int r = 0;
        int c = n*m-1;

        while(r<=c){
            int mid = r+(c-r)/2;
            int midVal = matrix[mid/m][mid%m]; 
            if(midVal==target){
                return true;
            }else if(midVal>target){
                c = mid-1;
            }else{
                r = mid+1;
            }
        }
        return false;
    }
};