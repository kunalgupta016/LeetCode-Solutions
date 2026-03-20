class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int> v;
        for(auto it:mp){
            v.push_back(it.first);
        }
        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i++){
            for(int j = i+1;j<v.size();j++){
                int x = v[i];
                int y = v[j];
                if(mp[x]!=mp[y]) return {x,y};
            }
        }
        return {-1,-1};
    }
};