class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        

        unordered_map<int,int> mp;

        stack<int> st;

        int n = nums2.size();
        for(int i = n-1;i>=0;i--){


            int val = nums2[i];

            while(!st.empty() && st.top()<=val){
                st.pop();
            }

            if(st.empty()){

                mp[val] = -1;
            }
            else{
                mp[val] = st.top();

            }
            st.push(val);


        }
        vector<int> ans;

        for(int i = 0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;


    }
};