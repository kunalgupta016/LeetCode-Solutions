class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxi(n);
        maxi[0] = nums[0];
        vector<int> mini(n);
        mini[n-1] = nums[n-1];
        int maxEle = nums[0];
        for(int i = 1;i<n;i++){
            maxEle = max(nums[i],maxEle);
            maxi[i] = maxEle;
        }
        int minEle = nums[n-1];
        for(int i = n-2;i>=0;i--){
            minEle = min(nums[i],minEle);
            mini[i] = minEle;
        }
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            int diff = maxi[i]-mini[i];
            if(diff<=k) return i;

        }
        return -1;


    }
};