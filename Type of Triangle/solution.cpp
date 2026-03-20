class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_set<int> st;
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        if ((a < b + c) && (b < c + a) && (c < a + b)) {
            for (auto it : nums) {
                st.insert(it);
            }
            if (st.size() == 3) {
                return "scalene";
            } else if (st.size() == 2) {
                return "isosceles";
            } else {
                return "equilateral";
            }
        } else {
            return "none";
        }
    }
};