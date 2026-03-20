class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());

        int gap = ceil((double)(maxi-mini)/(n-1));

        vector<int> bucketMin(n-1,INT_MAX);
        vector<int> bucketMax(n-1,INT_MIN);
        vector<int> used(n-1,false);
        for(int i:nums){
            if(i==mini || i==maxi) continue;
            int idx = (i-mini)/gap;
            bucketMin[idx] = min(bucketMin[idx],i);
            bucketMax[idx] = max(bucketMax[idx],i);
            used[idx] = true;
        }

        int ans = 0;
        int prev = mini;
        for(int i=0;i<n-1;i++){
            if(!used[i]) continue;
            ans = max(ans,bucketMin[i]-prev);
            prev = bucketMax[i];
        }
        ans = max(ans, maxi - prev);

        return ans;


    }
};