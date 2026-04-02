class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto ch:chars){
            mp[ch]++;
        }
        int cnt = 0;
        
        for(auto it:words){
            unordered_map<char, int> temp = mp;
            bool flag = true;
            for(auto c:it){
                if(!temp[c]){
                    flag = false;
                    break;
                }
                temp[c]--;
            }
            if(flag){
                cnt += it.size();
            }
        }
        return cnt;
    }
};