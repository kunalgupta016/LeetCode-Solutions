class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int n = s.size();
        int maxi = 0;
        unordered_set<char> c;
        while(r<n){
            while(l<r && c.find(s[r])!=c.end()){
                c.erase(s[l]);
                l++;
            }
            c.insert(s[r]);
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
        
    }
};