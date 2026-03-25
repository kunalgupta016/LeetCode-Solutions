class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,0),upper(26,0);
        for(char i:word){
            if(islower(i)){
                lower[i-'a']=1;
            }else{
                upper[i-'A'] =1;
            }

        }
        int cnt = 0;
        for(int i=0;i<26;i++){
            if(lower[i]&&upper[i]){
                cnt++;
            }
        }
        return cnt;
    }
};