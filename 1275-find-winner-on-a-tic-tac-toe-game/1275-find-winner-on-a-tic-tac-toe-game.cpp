class Solution {
public:


    bool check(vector<vector<int>>& g, int player) {

        for(int i = 0; i < 3; i++) {
            if(g[i][0] == player && g[i][1] == player && g[i][2] == player)
                return true;
        }
        

        for(int j = 0; j < 3; j++) {
            if(g[0][j] == player && g[1][j] == player && g[2][j] == player)
                return true;
        }

        if(g[0][0] == player && g[1][1] == player && g[2][2] == player)
            return true;
        
        if(g[0][2] == player && g[1][1] == player && g[2][0] == player)
            return true;
        
        return false;
    }

    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> grid(3,vector<int> (3,-1));
        for(int i = 0;i<moves.size();i++){
            if(i%2==0){
                grid[moves[i][0]][moves[i][1]] = 1;
            }else{
                grid[moves[i][0]][moves[i][1]] = 0;
            }
        }

        if(check(grid,1)) return "A";
        if(check(grid,0)) return "B";

        if(moves.size()<9) return "Pending";
        return "Draw";




    }
};