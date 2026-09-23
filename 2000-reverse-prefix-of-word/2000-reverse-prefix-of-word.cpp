class Solution {
public:
    string reversePrefix(string word, char ch) {
        int dposition = 0;
        for(int i = 0;i<word.size();i++){
            if(word[i]==ch){
                dposition = i;
                break;
            }
        }
        if(dposition==0){
            return word;
        }

        reverse(word.begin(),word.begin()+dposition+1);
        return word;
    }
};