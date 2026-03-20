class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int sum = 0;
        for(int i = 0;i<n;i++){
            int cnt = i;
            int num = nums[n-i-1];
            if(cnt*num>sum){
                res++;
            } 
            sum+=num;
        }
        return res;
    }
};