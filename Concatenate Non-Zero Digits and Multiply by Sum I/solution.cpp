class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string ans ;
        for(char c:s){
            if(c=='0'){
                continue;
            }
            else{
                ans = ans + c;
            }
        }

        long long res = 0;
        int sum = 0;
        for(int i = 0;i<ans.size();i++){
            res = res*10 + (ans[i]-'0');
            sum = sum + (ans[i]-'0');
        }
        long long an = res*sum;
        return an;

    }
};