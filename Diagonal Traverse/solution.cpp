class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>> mp;
        for(int i =0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(auto it:mp){
            vector<int> v = it.second;
            if(it.first % 2 == 0)
                reverse(v.begin(), v.end());

            for(int x : v)
                ans.push_back(x);
        }
        return ans;
    }
};