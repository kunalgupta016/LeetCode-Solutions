class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
    int maxi = 0;
    
    int n = s.size();
    for(int i = n-1 ; i>=0;i--){
        if(s[i]==')'){
            cnt++;
            maxi = max(cnt,maxi);
            
        }
        else if(s[i]=='('){
            
            cnt--;
            if(cnt<0){
                return -1;
            }
        }
        
        
    }
    
    if(cnt!=0) return -1;
    return maxi;
    }
};