class Solution {
public:

    int helper(string &s ,int &i){
        stack<long long> st;
        long long num = 0;
        char op = '+';
        for(;i<s.size();i++){
            char c = s[i];
            if(isdigit(c)){
                num = num*10+(c-'0');
            }
            else if(c=='('){
                i++;
                num = helper(s,i);
            }
            if((!isdigit(c) && c!=' ') || i==s.size()-1){
                if(op=='+'){
                    st.push(num);
                }else if(op=='-') st.push(-num);
                else if(op=='*'){
                    int top = st.top();
                    st.pop();
                    st.push(top*num);
                }
                else if(op=='/'){
                    int top = st.top();
                    st.pop();
                    st.push(top/num);
                }
                op = c;
                num = 0;
            }

            if(c==')') break;
        }
        long long res = 0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return (int)res;
    }


    int calculate(string s) {
        int i = 0;
        return helper(s,i);
    }
};