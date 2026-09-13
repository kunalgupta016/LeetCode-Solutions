class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int breakPoint = -1;

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                if (breakPoint != -1)
                    return -1;
                breakPoint = i;
            }
        }

  
        if (breakPoint != -1 && nums[n - 1] > nums[0])
            return -1;

        return breakPoint == -1 ? 0 : n - breakPoint;
    }
};