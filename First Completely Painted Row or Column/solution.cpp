class Solution {
public:


    

    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,pair<int,int>> mp;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int ele = mat[i][j];
                mp[ele] = {i,j};
            }
        }
        unordered_map<int,int> rowCount;
        unordered_map<int,int> colCount;

        int cnt = -1;
        for(int i = 0;i<arr.size();i++){
            int ele = arr[i];
            int row = mp[ele].first;
            int col = mp[ele].second;
            rowCount[row]++;
            colCount[col]++;
            if(rowCount[row] == m || colCount[col] == n){
                return i;
            }
            

        }
        return -1;
    }
};