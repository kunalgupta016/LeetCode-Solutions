class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp = "";
        vector<string> ans;
        for(char c:path){
            if(c=='/'){
                ans.push_back(temp);
                temp = "";
            }else{
                temp+=c;
            }
        }
        ans.push_back(temp);

        for(string s:ans){
            if(s=="." ||  s=="") continue;
            else if(s==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s);
            }
        }

        if(st.empty()) return "/";
        string res = "";
        while(!st.empty()){
            res = "/"+st.top()+res;
            st.pop();
        }
        return res;

    }
};