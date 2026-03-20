class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_map<char,int> mp;
        int maxLen = 0;
        while (right < s.size()) {
            char curr = s[right];

            
            while (mp.find(curr) != mp.end() && mp[curr] >= left) {
                left = mp[curr] + 1;
            }

            mp[curr] = right; 
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;

        
    }
};