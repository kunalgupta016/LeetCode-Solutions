class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int,int> mp;
        int cnt = 0;
        for(auto &i:dominoes){
            int a = i[0];
            int b = i[1];
            int ele = (min(a,b)*10+max(a,b));
            cnt = cnt+mp[ele];
            mp[ele]++; 
        }

        return cnt;
    }
};