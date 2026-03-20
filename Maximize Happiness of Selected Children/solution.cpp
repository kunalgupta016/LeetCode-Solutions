class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.rbegin(),h.rend());
        long long  sum = 0;
        int s = 0;

        for(int i = 0;i<k;i++){
            if(h[i]-s>0){
                sum+=h[i]-s;
            }else{
                break;
            }
            s++;
        }
        
        return sum;
    }
};