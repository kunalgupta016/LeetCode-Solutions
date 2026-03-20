class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int right =0;
        int maxCount = 0;
        int maxLength = 0;
        int n = s.size();
        unordered_map<char,int> mp;
        while (right < s.size()) {

            
            mp[s[right]]++;

            
            maxCount = max(maxCount, mp[s[right]]);

            
            if ((right - l + 1) - maxCount > k) {
                mp[s[l]]--;
                l++;
            }

            
            maxLength = max(maxLength, right - l+ 1);
            
            
            right++;
        }
        return maxLength;
    }

};