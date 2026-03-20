class Solution {
public:
    /*
    int solve(int i , string &s , int n , vector<int>&dp){
        
        if(dp[i]!=-1) return dp[i];

        if(i==n) {
            return dp[i]=1;
        }
        if(s[i]=='0'){
           return dp[i] = 0;
        }
        int result = solve(i+1,s,n,dp);
        if(i+1<n){
            if(s[i]=='1' || (s[i]=='2'&&s[i+1]<='6')){
                result+=solve(i+2,s,n,dp);
            }
        }
        return dp[i] = result;
    }

    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1,-1);
        return solve(0,s,n,dp);
    }
    */

    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1,0);
        dp[n] = 1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                dp[i] = 0;
            }else{
                dp[i]+=dp[i+1];
                if(i+1<n){
                    if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
                        dp[i]+=dp[i+2];
                    }
                }
            }
            
        }
        return dp[0];
        
    }


};