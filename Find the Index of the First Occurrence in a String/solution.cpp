class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = needle.size();
        string ans = "";

        // Edge case: if needle is empty
        if (k == 0) return 0;

        // If haystack is smaller than needle
        if (haystack.size() < k) return -1;

        // Initial window
        for (int i = 0; i < k; i++) {
            ans.push_back(haystack[i]);
        }

        if (ans == needle) {
            return 0;
        } else {
            for (int i = k; i < haystack.size(); i++) {
                ans.erase(ans.begin());
                ans.push_back(haystack[i]);
                if (ans == needle) {
                    return i - k + 1;
                }
            }
        }

        return -1; // If needle is not found
    }
};