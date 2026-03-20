class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for(char i:allowed){
            st.insert(i);
        }
        int cnt = 0;
        for(auto i :words){
            bool ok = true;
            for(char j:i){
                if(!st.count(j)){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cnt++;
            }
        }
        return cnt;
    }
};