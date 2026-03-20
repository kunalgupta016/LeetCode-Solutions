class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());

        int count = 0; 
        bool hasBroke = false; 

        for (int i = 0; i <= text.size(); i++) {
            if (i == text.size() || text[i] == ' ') {
                
                if (!hasBroke) count++;
                hasBroke = false;  
            } else {
                if (broken.count(text[i])) {
                    hasBroke = true; 
                }
            }
        }
        return count;
    }
};