class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto c:s){
            if(c=='*'){
                if(st.empty()) continue;
                else st.pop();
            }
            else{
                st.push(c);
            }
        }
        string ans = "";
        while(!st.empty()){
            char ch = st.top();
            ans.push_back(ch);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};