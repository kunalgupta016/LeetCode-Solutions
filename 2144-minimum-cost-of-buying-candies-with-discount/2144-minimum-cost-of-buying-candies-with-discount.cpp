class Solution {
public:
    int minimumCost(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        stack<int> st;
        for (int i : arr) {
            st.push(i);
        }
        int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
            if (!st.empty()) {
                total += st.top();
                st.pop();
            }
            if (!st.empty()) {

                st.pop();
            }
        }
        return total;
    }
};