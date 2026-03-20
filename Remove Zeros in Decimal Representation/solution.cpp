class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        long long ans = 0;
        for(auto it:s){
            if(it>'0'){
                ans = ans*10 + (it-'0');
            }
        }
        return ans;


    }
};