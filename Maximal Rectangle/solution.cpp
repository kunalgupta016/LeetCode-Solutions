class Solution {
public:
    vector<int> nextSmaller(vector<int>& heights, int n) {
        stack<int> st;
        st.push(-1);
        vector<int> arr(n);
        for (int i = n - 1; i >= 0; i--) {
            while (st.top() != -1 && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            arr[i] = st.top();
            st.push(i);
        }
        return arr;
    }

    vector<int> preSmaller(vector<int>& heights, int n) {
        stack<int> st;
        st.push(-1);
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            while (st.top() != -1 && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            arr[i] = st.top();
            st.push(i);
        }
        return arr;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next = nextSmaller(heights, n);
        vector<int> pre = preSmaller(heights, n);

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (next[i] == -1) next[i] = n;
            int width = next[i] - pre[i] - 1;
            int area = heights[i] * width;
            maxi = max(maxi, area);
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int maxArea = 0;

        vector<int> heights(col, 0);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == '1') {
                    heights[j] += 1;
                } else {
                    heights[j] = 0;
                }
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
};
