class Solution {
public:
    int minPartitions(string n) {
        int ans = INT_MIN;
        for(auto ch:n){
            int c = ch-'0';
            ans = max(ans,c);
        }    
        return ans;
    
    }
};