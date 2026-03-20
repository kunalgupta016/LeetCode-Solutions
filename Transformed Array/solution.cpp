class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            if(nums[i]>=0){
                int shiftingIndex = (i+nums[i])%n;
                arr[i] = nums[shiftingIndex];
            }
            if(nums[i]<0){
                int crrVal = nums[i]%n;
                int shiftingIndex = (i+n+crrVal)%n;
                arr[i] = nums[shiftingIndex];
            }
        }
        return arr;
    }
};