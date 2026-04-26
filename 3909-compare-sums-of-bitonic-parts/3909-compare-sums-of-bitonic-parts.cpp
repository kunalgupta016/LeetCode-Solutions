class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sum(n);
        sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + nums[i];
        }
        int index = 0;
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                index = i;
                break;
            }
        }
        long long ascSum = sum[index];
        long long decSum;
        if (index == 0)
            decSum = sum[n - 1];
        else
            decSum = sum[n - 1] - sum[index - 1];
        if (ascSum > decSum)
            return 0;
        else if (ascSum < decSum)
            return 1;
        else
            return -1;
    }
};