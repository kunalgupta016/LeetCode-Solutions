class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int,set<int>> mp;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0;i<n;i++){
            set<int> s;
            for(int j = 0;j<m;j++){
                s.insert(matrix[i][j]);
            }
            if(s.size()!=n) return false;

        }
        for(int j = 0;j<m;j++){
            set<int> s;
            for(int i = 0;i<n;i++){
                s.insert(matrix[i][j]);
            }
            if(s.size()!=n) return false;

        }
        return true;
    }
};