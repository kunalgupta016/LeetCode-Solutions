class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0, n = nums.size(), cnt = 0, res = 0;
        int tempCount = 0;

        while (r < n) {
            if (nums[r] & 1) {
                cnt++;
                tempCount = 0;
            }

            while (cnt == k) {
                if (nums[l] & 1) cnt--;
                tempCount++;
                l++;
            }

            res += tempCount;
            r++;
        }
        return res;
    }
};
