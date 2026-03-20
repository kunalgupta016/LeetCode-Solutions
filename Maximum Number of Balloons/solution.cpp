class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
      

        
        for(char i : text){
            mp[i]++;
        }
        int cnt = 0;
        while(mp['b']>=1 && mp['a']>=1 && mp['l']>=2 && mp['o']>=2 && mp['n']>=1){
            mp['b']--;
            mp['a']--;
            mp['l'] = mp['l']-2;
            mp['o'] = mp['o']-2;
            mp['n']--;
            cnt++;
        }
        return cnt;
    }
};