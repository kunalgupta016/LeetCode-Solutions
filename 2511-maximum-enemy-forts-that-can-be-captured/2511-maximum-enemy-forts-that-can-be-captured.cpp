class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxi = 0;
        
        int n = forts.size();
        for(int i = 0;i<n-1;++i){
           if(forts[i]==0) continue;
           int cnt = 0;
           for(int j = i+1;j<n;j++){
            if(forts[j]==0) cnt++;
            else{
                if(forts[j]==-forts[i]){
                    maxi = max(maxi,cnt);
                }
                break;
            }
           }
        }
        return maxi;
        

    }
};