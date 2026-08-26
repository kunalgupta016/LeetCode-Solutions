class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mini = INT_MAX;
        int index =-1;
        for(int i = 0;i<drones.size();i++){

            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];

            int man_x = abs(x-target[0]);
            int man_y = abs(y-target[1]);
            int man_dist = man_x+man_y;
            if(man_dist<=range){
                if(mini>man_dist){
                    mini = man_dist;
                    index = i;
                }
            }

        }
        return index;
    }
};