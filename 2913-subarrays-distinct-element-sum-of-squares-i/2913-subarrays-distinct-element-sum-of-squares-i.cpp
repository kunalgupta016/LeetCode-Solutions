class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n  = nums.size();
        int res=0;
        for(int i  = 0;i<n;i++){
            unordered_set<int> st;
            for(int r = i;r<n;r++){
                st.insert(nums[r]);
                int d = st.size();
                res+=d*d;
            }
        }
        return res;
    }
};