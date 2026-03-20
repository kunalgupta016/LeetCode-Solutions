class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }

        int cnt = 0;
        bool hai = false;
        for(auto it:mp){
            if(it.second&1){
                cnt += it.second-1;
                hai = true;
            }else{
                cnt+=it.second;
            }
        }
        if(hai) cnt+=1;
        
        return cnt;

    }
};