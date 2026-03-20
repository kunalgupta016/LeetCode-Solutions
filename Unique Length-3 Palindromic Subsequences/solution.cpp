class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            int start = -1;
            int end = -1;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == 'a' + i) {
                    if (start != -1) {
                        end = j;
                    } else {
                        start = j;
                    }
                }
            }
            unordered_set<char> st;
            for (int j = start + 1; j < end; j++) {
                st.insert(s[j]);
            }
            ans += st.size();
        }

        return ans;
    }
};