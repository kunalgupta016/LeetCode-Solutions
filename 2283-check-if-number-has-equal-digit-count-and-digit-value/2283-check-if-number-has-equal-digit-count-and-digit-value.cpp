class Solution {
public:
    bool digitCount(string num) {
        map<int,int> mp;
        for(char c:num){
            int d = c-'0';
            mp[d]++;
        }
        for(int i = 0;i<num.size();i++){
            if(mp[i]!=num[i]-'0') return false;
        }
        return true;
    }
};