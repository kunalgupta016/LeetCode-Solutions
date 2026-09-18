class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int l = 0;
        unordered_set<char> st;
        int cnt = 0;
        while(i<n){

            while(l<i && st.find(s[i])!=st.end()){

                st.erase(s[l]);
                l++;

            }
            st.insert(s[i]);
            cnt = max(cnt,i-l+1);
            i++;

        }
        return cnt;
    }
};