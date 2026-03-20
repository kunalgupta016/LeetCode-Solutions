class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> mp(26,0);
        for(int i = 0;i<s.size();i++){
            mp[s[i]-'a'] = i;
        }
        int sum = 0;
        for(int i = 0;i<t.size();i++){
            int ele = t[i]-'a';
            sum+=abs(mp[ele]-i);
        }
        return sum;
    }
};