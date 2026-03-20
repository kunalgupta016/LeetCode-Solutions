class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<long long> leftMin(n), rightMin(n), leftMax(n), rightMax(n);

        // ----- Previous Smaller -----
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) st.pop();
            leftMin[i] = st.empty() ? i + 1 : i - st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // ----- Next Smaller -----
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) st.pop();
            rightMin[i] = st.empty() ? n - i : st.top() - i;
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // ----- Previous Greater -----
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i]) st.pop();
            leftMax[i] = st.empty() ? i + 1 : i - st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // ----- Next Greater -----
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) st.pop();
            rightMax[i] = st.empty() ? n - i : st.top() - i;
            st.push(i);
        }

        long long sumMax = 0, sumMin = 0;
        for (int i = 0; i < n; i++) {
            sumMin += (long long)nums[i] * leftMin[i] * rightMin[i];
            sumMax += (long long)nums[i] * leftMax[i] * rightMax[i];
        }

        return sumMax - sumMin;
    }
};
