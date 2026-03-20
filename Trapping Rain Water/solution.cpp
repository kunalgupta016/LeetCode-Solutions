class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int n = height.size();
        int cnt = 0;
        for(int i = 0 ; i<n ; i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int t = st.top();
                st.pop();
                if(st.empty()) break;
                int distance  = i - st.top()-1;
                int hei = min(height[i],height[st.top()])-height[t];
                cnt+=distance*hei;
            }
            st.push(i);
        }
        return cnt;
    }
};