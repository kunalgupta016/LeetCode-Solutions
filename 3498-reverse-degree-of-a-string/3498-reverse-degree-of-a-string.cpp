class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            int ascii = 26-(c-'a');
            sum+=(ascii)*(i+1);

        }
        return sum;
        
    }
};