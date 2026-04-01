class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        int i = 0;
        while(i<s.size()){
            if(s[i]=='#' && !st.empty()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        string svali ="";
        while(!st.empty()){
            if(st.top()=='#'){
                st.pop();
                continue;
            }
            svali+=st.top();
            st.pop();
        }
        i = 0;
        while(i<t.size()){
            if(t[i]=='#' && !st.empty()){
                st.pop();
            }
            else{
                st.push(t[i]);
            }
            i++;
        }
        string tvali ="";
        while(!st.empty()){
            if(st.top()=='#'){
                st.pop();
                continue;
            }
            tvali+=st.top();
            st.pop();
        }
        return svali==tvali;
    }
};