class Solution {
public:
    int similarPairs(vector<string>& words) {
        int cnt = 0;
        for(int i = 0;i<words.size();i++){
            set<char> st;
            for(int j=0;j<words[i].size();j++){
                st.insert(words[i][j]);
            }
            for(int j=i+1;j<words.size();j++){
                set<char> st2;
                for(int k=0;k<words[j].size();k++){
                    st2.insert(words[j][k]);
                }
                if(st==st2){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};