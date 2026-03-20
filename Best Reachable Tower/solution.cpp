class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int cx = center[0];
        int cy = center[1];
        vector<int> best = {-1,-1,-1};
        for(auto &t :towers){
            int x = t[0];
            int y = t[1];
            int q  = t[2];
            int dist = abs(cx-x)+abs(cy-y);
            if(dist>radius) continue;
            if(q>best[2]){
                best = t;
            }
            else if(q==best[2]){
                if(x<best[0] || (x==best[0]&&y<best[1])){
                    best = t;
                }
            }
        }

        if(best[2]==-1){
            return {-1,-1};
        }
        return {best[0],best[1]};
    }
};