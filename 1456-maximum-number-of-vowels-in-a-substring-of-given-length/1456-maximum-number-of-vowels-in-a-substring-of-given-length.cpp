class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel = "aeiou";
        int n = s.size();
        int length = 0;
        for(int i = 0;i<k;i++){
            if(vowel.find(s[i])!=string::npos){
                length++;
            }
        }

        int maxLength = length;
        int l = 0;
        int r = k;
        while(r<n){
            if(vowel.find(s[l])!=string::npos){
                length--;
            }
            if(vowel.find(s[r])!=string::npos){
                length++;
            }
            r++;
            l++;
            maxLength = max(maxLength,length);
        }
        return maxLength;

        

    }
};