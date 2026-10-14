class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string res="";
        for(char c:s){
            if(c==']'){
                string ans;
                while(!st.empty() && st.top()!='['){
                    c = st.top();
                    ans.push_back(c);
                    st.pop();
                }
                reverse(ans.begin(),ans.end());
                st.pop();
                int num = 0;
                int place = 1;
                while(!st.empty() && isdigit(st.top())){

                    num+=(st.top()-'0')*place;
                    place= place*10;
                    st.pop();

                }

                string temp = "";
                for(int i = 0;i<num;i++){
                    temp+=ans;
                }
                for(char c:temp){
                    st.push(c);
                }
                
            }else{
                st.push(c);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};