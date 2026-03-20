class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        int i = n-1;
        while(i>=0 && ((s[i]-'0')%2!=0)){
            i--;
        }
        string ans = s.substr(0,i+1);
        return ans;
    }
};