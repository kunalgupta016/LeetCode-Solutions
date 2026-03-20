class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        vector<int> ans;
        for(int i:nums2){
            while(!st.empty()&&i>st.top()){
                mp[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();

        }

        for(int i:nums1){
            if(mp.find(i)!=mp.end()){
                ans.push_back(mp[i]);
            }
            else{
                ans.push_back(-1);
            }
        }


        return ans;
    }
};