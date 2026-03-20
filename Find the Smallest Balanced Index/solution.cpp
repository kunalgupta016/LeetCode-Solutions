class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prefixSum(n, 0);
        vector<long long> suffixProduct(n, 1);

        for (int i = 1; i < n; i++) {
            if (prefixSum[i - 1] > LLONG_MAX - nums[i - 1])
                prefixSum[i] = LLONG_MAX;
            else
                prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            if (suffixProduct[i + 1] > LLONG_MAX / nums[i + 1])
                suffixProduct[i] = LLONG_MAX;
            else
                suffixProduct[i] = suffixProduct[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            if (prefixSum[i] == suffixProduct[i])
                return i;
        }

        return -1;
    }
};