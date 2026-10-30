
class Solution {
public:

    bool valid(string &s) {
        int hyphen = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {

            if (isdigit(s[i])) return false;

            if (isalpha(s[i])) continue;

            if (s[i] == '-') {
                hyphen++;

                if (hyphen > 1) return false;

                if (i == 0 || i == n - 1) return false;

                if (!isalpha(s[i - 1]) || !isalpha(s[i + 1]))
                    return false;
            }
            else {
                if (i != n - 1) return false;
            }
        }

        return true;
    }

    int countValidWords(string s) {
        int ans = 0;
        string word = "";

        for (int i = 0; i <= s.size(); i++) {

            if (i == s.size() || s[i] == ' ') {

                if (!word.empty()) {
                    if (valid(word)) {
                        ans++;
                    }
                    word = "";
                }

            }
            else {
                word.push_back(s[i]);
            }
        }

        return ans;
    }
};
