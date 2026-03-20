class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cnt= 0;
        int n = colors.size();
        int i = 0;
        int j = 1;
        if(n==2){
            if(colors[i]==colors[j]){
                cnt += min(neededTime[i],neededTime[j]);
            }
            return cnt;
        }
        if(n==1) return 0;
        while(j<n){
            if(colors[i]==colors[j]){
               if(neededTime[i]>=neededTime[j]){
                cnt += neededTime[j];
                j++;
               }
               else{
                cnt+=neededTime[i];
                i=j;
                j++;
                
               }
            }else{
                i=j;
                j++;
            }
            
        }

        return cnt;


    }
};