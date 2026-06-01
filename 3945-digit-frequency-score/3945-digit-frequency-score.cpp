class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;
        while(n!=0){
            mp[n%10]++;
            n = n/10;
        }
        int cnt = 0;
        for(auto it:mp){
            cnt = cnt + (it.first*it.second);
        }
        return cnt;
    }
};