class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        string s = to_string(num);
        
        while(s.size()>1){
            int sum = 0;
            for(char c:s){
                sum+=c-'0';
            }
            s = to_string(sum);
        
        }
        return s[0]-'0';
    }
};