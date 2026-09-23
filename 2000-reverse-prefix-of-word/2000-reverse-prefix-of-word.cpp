class Solution {
public:
    string reversePrefix(string word, char ch) {
        int chposition = 0;
        for(int i = 0;i<word.size();i++){
            if(word[i]==ch){
                chposition = i;
                break;
            }
        }
        if(chposition==0){
            return word;
        }

        reverse(word.begin(),word.begin()+chposition+1);
        return word;
    }
};