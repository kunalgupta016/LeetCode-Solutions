class Solution {
public:

    void solve(vector<string>&ans,string s,int n,int open,int close){
        if(s.size()>=2*n){
            ans.push_back(s);
            return ;

        }
        if(open<n){
            solve(ans,s+"(",n,open+1,close);
        }
        if(close<open){
            solve(ans,s+")",n,open,close+1);
        }
    }


    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        solve(ans,s,n,0,0);
        return ans;
    }
};