class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        // 1️⃣ create 2n array
        vector<int> arr(2 * n);
        for(int i = 0; i < n; i++) {
            arr[i] = nums[i];
            arr[n + i] = nums[i];
        }

        vector<int> ans(n, -1);
        stack<int> st; 

        
        for(int i = 0; i < 2 * n; i++) {
            while(!st.empty() && arr[st.top()] < arr[i]) {
                int idx = st.top();
                st.pop();

                
                if(idx < n) {
                    ans[idx] = arr[i];
                }
            }
            st.push(i);
        }

        return ans;
    }
};
