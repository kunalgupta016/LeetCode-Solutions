class Solution {
public:
    string thousandSeparator(int n) {
        string s = "";
        if(n==0) return "0";
        int cnt = 0;
        while(cnt!=3 && n!=0){
            int r = n%10;
            s+=r+'0';
            n/=10;
            cnt++;
            if(cnt%3==0 && n!=0){
                s+=".";
                cnt=0;
            }
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};