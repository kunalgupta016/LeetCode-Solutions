class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int maxi = 0;
        int cnt = 0;
        for(int i :nums){
            if(i>=maxi) {
                maxi = i;
                cnt++;
            }
        }
    return cnt;
    }
};