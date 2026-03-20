class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if(n==0) return 0;
        int i = 0;
        while(i<n && s[i]==' ') i++;
        s = s.substr(i);
        n = s.size();
        int sign = 1;
        long long ans = 0;
        if(s[0]=='-') sign = -1;
        int MIN = INT_MIN;
        int MAX = INT_MAX;
        i = (s[0]=='-' || s[0]=='+')?1:0;
        while(i<n){
            if(s[0]==' ' || !isdigit(s[i])) break;
            ans = ans*10 + s[i]-'0';
            if(sign==-1 && -1*ans<MIN) return MIN;
            if(sign==1 && 1*ans>MAX) return MAX;
            i++;
        }
        return (int)(sign*ans);
    }
};