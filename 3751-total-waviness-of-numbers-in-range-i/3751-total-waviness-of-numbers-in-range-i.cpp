class Solution {
public:

    int solve(string s){
        int n = s.size();
        if(n<=2){
            return 0;
        }
        int cnt = 0;
        for(int i = 1;i<n;i++){
            if(i+1<n && s[i]>s[i-1] && s[i]>s[i+1]){
                cnt++;
            }else if(i+1<n && s[i]<s[i-1] && s[i]<s[i+1]){
                cnt++;
            }
        }
        return cnt;

    }

    int totalWaviness(int num1, int num2) {
        int cnt = 0;
        for(int i = num1;i<=num2;i++){
            string s = to_string(i);
            cnt+=solve(s);
        }
        return cnt;
    }
};