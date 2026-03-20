class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> st;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            st.insert(ch);
            int size = st.size();
            int sol  = (i+1)%3;
            if(sol==size){
                cnt++;
            }
        }
        return cnt;
    }
};