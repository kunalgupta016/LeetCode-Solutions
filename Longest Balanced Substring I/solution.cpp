class Solution {
public:
    int longestBalanced(string s) {
        
        int n = s.size();
        int ans = 0;

        for(int i = 0;i<n;i++){
           int mx = 0;
           int cnt = 0;
           vector<int> arr(26,0);
           
           for(int j = i;j<n;j++){
             int c = s[j]-'a';
             if(++arr[c]==1){
                cnt++;
             }
             mx = max(mx,arr[c]);
             if(mx*cnt==j-i+1){
                ans = max(ans,j-i+1);
             }


           }

        
            
        }
    return ans;

    }
};