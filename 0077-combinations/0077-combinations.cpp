class Solution {
public:

    void solve(int s,vector<int> &ans,vector<vector<int>>&res,int n,int k){
        if(ans.size()==k){
            res.push_back(ans);
            return;

        }

        for(int i = s;i<=n;i++){
            ans.push_back(i);
            solve(i+1,ans,res,n,k);
            ans.pop_back();
        }
    }


    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(1,ans,res,n,k);
        return res;
    }
};