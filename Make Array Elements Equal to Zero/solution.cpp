class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int cnt = 0;
        for(int &i:nums) sum+=i;
        for(int i = 0 ; i<n;i++){
            left+=nums[i];
            sum-=nums[i];
            if(nums[i]!=0) continue;
            if(left==sum) cnt+=2;
            if(abs(left-sum)==1) cnt++;
        }
        return cnt;

    }
};