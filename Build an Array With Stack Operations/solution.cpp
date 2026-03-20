class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        unordered_set<int> st;
        for(int i:target){
            st.insert(i);
        }
        vector<string> ans;
        stack<int> sta;

        for(int i = 1;i<=n;i++){
            if(sta.size()==target.size()) return ans;
            sta.push(i);
            if(st.contains(i)){
                ans.push_back("Push");
                
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
                sta.pop();
            }


        }
        return ans;
    }
};