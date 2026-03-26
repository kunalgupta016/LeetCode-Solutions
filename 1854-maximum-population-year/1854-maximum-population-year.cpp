class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        vector<pair<int,int>> events;
        for(auto &log:logs){
            events.push_back({log[0],1});
            events.push_back({log[1],-1});
        }
        sort(begin(events),end(events));
        int minYear = 2050;
        int crrPop = 0;
        int maxPop= 0;
        for(auto &e:events){
            crrPop +=e.second;
            if(crrPop>maxPop){
                maxPop = crrPop;
                minYear = e.first;
            }
        }
        return minYear;
    }
};