class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<pair<int,int>> events;
        for(auto &f:firstList){
            events.push_back({f[0],1});
            events.push_back({f[1],-1});
        }
        for(auto &s:secondList){
            events.push_back({s[0],1});
            events.push_back({s[1],-1});
        }

        sort(events.begin(),events.end(),[](auto &a,auto &b){
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });


        int active = 0;
        int start = -1;
        vector<vector<int>> result;
        for(auto &e:events){
            active+=e.second;
            if(active==2) start = e.first;
            if(active<2 && start!=-1){
                result.push_back({start,e.first});
                start = -1;
            }
        }
        return result;
    }
};