class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st(friends.begin(),friends.end());
        vector<int> ans;
        for(auto it:order){
            if(st.count(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};