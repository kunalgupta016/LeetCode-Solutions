class Solution {
public:
    bool areNumbersAscending(string s) {
        int k = -1;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                int num = 0;
                while(i < s.size() && isdigit(s[i])){
                    num = num * 10 + (s[i] - '0'); // build multi-digit number
                    i++;
                }
                if(num <= k) return false;
                k = num;
            }
        }
        return true;
    }
};
