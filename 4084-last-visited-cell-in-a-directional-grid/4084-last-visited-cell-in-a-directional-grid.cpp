class Solution {
public:

    vector<int> visit(char move,int x, int y){

        if(move=='L'){
            y--;
        }
        else if(move=='R'){
            y++;
        }
        else if(move=='U'){
            x--;
        }else if(move=='D'){
            x++;
        }
        return {x,y};

    }

    vector<int> lastVisitedCell(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        int crrX = 0;
        int crrY = 0;

        while(true){

            vis[crrX][crrY] = 1;
            vector<int> curr = visit(grid[crrX][crrY],crrX,crrY);

            int x = curr[0];
            int y = curr[1];

            if(x<0 || x>=n || y<0 || y>=m || vis[x][y]){
                break;
            }

            crrX = x;
            crrY = y;


        }

        return {crrX,crrY};
    }
};