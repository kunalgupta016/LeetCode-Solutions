class Solution {
public:

    bool isVowel(char c){
        string s = "aeiouAEIOU";
        return s.contains(c);
    }

    bool halvesAreAlike(string s) {
        int left = 0;
        int right = 0;
        int n = s.size();
        for(int i = 0;i<n/2;i++){
            if(isVowel(s[i])) left++;
        }
        for(int i = n/2;i<n;i++){
            if(isVowel(s[i])) right++;
        }
        return left==right;

        
    }
};