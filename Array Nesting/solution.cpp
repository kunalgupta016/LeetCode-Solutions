class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        vector<bool> visited(n,false);
        for(int num:nums){
            int cnt = 0;
            while(!visited[num]){
                visited[num] = true;
                cnt++; 
                num = nums[num];

            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};