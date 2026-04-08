class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string temp = "";
        vector<string> arr;
        for(int i = 0;i<path.size();i++){
            if(path[i]=='/'){
                arr.push_back(temp);
                temp="";
            }
            else{
                temp+=path[i];
            }
        }

        arr.push_back(temp);

        for ( string s:arr){
            if(s == "." || s == ""){
                continue;
            }
            else if(s==".."){
                if(!st.empty()) st.pop();
            }else{
                st.push(s);
            }
        }

        if(st.empty()) return "/";
        string res="";
        while(!st.empty()){
            res = "/"+st.top()+res;
            st.pop();

        }
        return res;

    }
};