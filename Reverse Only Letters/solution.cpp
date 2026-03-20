class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char> charE;
        // vector<int> numE;


        for(int i = 0 ;i<s.size();i++){
            if(isalpha(s[i])){
                charE.push_back(s[i]);
                // numE.push_back(i);
            }
        }
        reverse(charE.begin(),charE.end());
        int j = 0;
        for(int i = 0;i<s.size();i++){
            if(isalpha(s[i])){
                s[i] = charE[j];
                j++; 
            }
        }
        return s;


    }
};