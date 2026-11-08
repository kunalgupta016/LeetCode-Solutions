class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int cnt = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    // row
                    bool rowhairight = false;
                    for (int k = j + 1; k < grid[i].size(); k++) {
                        if (grid[i][k] == 1) {
                            rowhairight = true;
                            break;
                        }
                    }

                    bool rowhaileft = false;
                    for (int k = j -1; k>=0; k--) {
                        if (grid[i][k] == 1) {
                            rowhaileft = true;
                            break;
                        }
                    }


                    bool colhaidown = false;

                    
                        for (int k = i + 1; k < grid.size(); k++) {
                            if (grid[k][j] == 1) {
                                colhaidown = true;
                                break;
                            }
                        }
                    
                    bool colhaiupper = false;

                    for (int k = i - 1; k >= 0; k--) {
                            if (grid[k][j] == 1) {
                                colhaiupper = true;
                                break;
                            }
                        }

                    if(rowhairight || colhaidown || rowhaileft || colhaiupper){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};