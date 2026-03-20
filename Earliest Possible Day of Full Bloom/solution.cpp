class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int,int>> v;
        for(int i = 0;i<n;i++){
            v.push_back({growTime[i],plantTime[i]});
        }
        sort(v.rbegin(),v.rend());
        int p = 0;
        int cnt = 0;
        int ans = 0;
        for(auto i:v){
            int g = i.first;
            p = i.second;
            cnt +=p;
            ans = max(ans,g+cnt);
        }
        return ans;
    }
};