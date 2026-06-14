class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i :nums){
            if(i==0){
                cnt = 0;
                continue;
            }
            cnt++;
            maxi = max(cnt,maxi);
            
        }
        return maxi;
    }
};