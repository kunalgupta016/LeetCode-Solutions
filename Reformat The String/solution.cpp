class Solution {
public:
    string reformat(string s) {
        
        string letters = "";
        string digits = "";
        
        for(char ch : s){
            if(isdigit(ch))
                digits += ch;
            else
                letters += ch;
        }
        int ls = letters.size();
        int ds = digits.size();
        if(abs(ls - ds) > 1) return "";
        
        string result = "";
        
        bool letterFirst = letters.size() > digits.size();
        
        int i = 0, j = 0;
        
        while(i < letters.size() || j < digits.size()){
            
            if(letterFirst && i < letters.size()){
                result += letters[i++];
            }
            
            if(j < digits.size()){
                result += digits[j++];
            }
            
            if(!letterFirst && i < letters.size()){
                result += letters[i++];
            }
        }
        
        return result;
    }
};
