class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int n = words.size();
        int total = 0;
        for(string &s:words){
            string rev = s;
            reverse(rev.begin(),rev.end());
            if(mp[rev]>0){
                total+=4;
                mp[rev]--;
            }
            else{
                mp[s]++;
            }
        }
        for(auto &p:mp){
            if (p.first[0] == p.first[1] && p.second > 0) {
                total += 2;
                break;
            }
        }
        return total;

    }
};