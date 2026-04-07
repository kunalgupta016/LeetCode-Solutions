class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> b;
        for(auto i:obstacles){
            b.insert({i[0],i[1]});
        }

        vector<pair<int,int>> dir={
            {0,1},{1,0},{0,-1},{-1,0}
        };

        int x = 0;
        int y = 0;
        int d = 0;
        int maxi =0;
        for(int i = 0;i<commands.size();i++){
            if(commands[i]==-1){
                d = (d+1)%4;
            }
            else if(commands[i]==-2){
                d = (d+3)%4;
            }
            else{
                while(commands[i]--){
                    int dx = x+dir[d].first;
                    int dy = y+dir[d].second;
                    
                    if(b.count({dx,dy})) break;

                    x = dx;
                    y = dy;

                    maxi = max(maxi,(x*x+y*y));

                }
            }
        }
        return maxi;


    }
};