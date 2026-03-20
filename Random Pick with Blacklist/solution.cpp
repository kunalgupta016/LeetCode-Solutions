class Solution {
public:

    unordered_map<int,int>mp;
    int limit;

    Solution(int n, vector<int>& blacklist) {
        int m = blacklist.size();
        limit = n-m;
        unordered_set<int> st(blacklist.begin(),blacklist.end());
        int last = n-1;
        for(int i :blacklist){
            if(i<limit){
                while(st.count(last)) last--;
                mp[i] = last;
                last--;
            }
        }
    }
    
    int pick() {
        int r = rand()%limit;
        if(mp.count(r)) return mp[r];
        return r;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */