class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size();
        vector<int> gain;
        for(int i =0;i<n;i++){

            string s = to_string(nums[i]);
            sort(s.rbegin(),s.rend());
            int num = stoi(s);
            ans+=nums[i];
            gain.push_back(num-nums[i]);

        }
        sort(gain.rbegin(),gain.rend());
        for(int i = 0;i<k;i++){
            ans+=gain[i];
        }
        return ans;
    }
};