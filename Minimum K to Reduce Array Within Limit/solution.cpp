class Solution {
public:
    bool isPossible(long long mid, vector<int>& nums) {
        long long ops = 0;
        long long val = mid * mid;
        for (int i = 0; i < nums.size(); i++) {
            ops += (nums[i] + mid - 1) / mid;
            if (ops > val)
                return false;
        }
        return true;
    }

    int minimumK(vector<int>& nums) {
        long long l = 1;
        long long r = 100000;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (isPossible(mid, nums)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};