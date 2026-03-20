class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long > ch(26,0);
        long long total = 0;
        for(int i = 0;i<cost.size();i++){
            ch[s[i]-'a'] += cost[i];
            total+=cost[i];
        }
        long long ans = 0;

        for(int i=0;i<26;i++){
            ans = max(ans,ch[i]);
        }

        
        return total-ans;
        
    }
};