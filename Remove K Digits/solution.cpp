class Solution {
public:
    string removeKdigits(string num, int k) {
        string  s= "";
        int n = num.size();
        stack<char> st;

        for(char c : num){
            while(!st.empty() && k>0 && st.top()>c){
                st.pop();
                k--;
            }
            st.push(c);
        }

        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        int i = 0;
        while(i!=s.size() && s[i]=='0'){
            i++;
        }
        string ans = (i==s.size())?"0":s.substr(i);
        return ans;
    }
};
