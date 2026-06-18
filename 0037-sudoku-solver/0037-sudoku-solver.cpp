class Solution {
public:

    bool isValid(int r, int c, int ch, vector<vector<char>>&board){

        for(int i =0;i<9;i++){

            if(board[r][i]==ch){
                return false;
            }
            if(board[i][c]==ch){
                return false;
            }
            if(board[3*(r/3)+i/3][3*(c/3)+i%3]==ch)
                return false;
        }
        return true;

    }

    bool solve(vector<vector<char>>&board){

        for(int row = 0;row<9 ;row++){
            for(int col=0;col<9;col++){

                if(board[row][col]=='.'){

                    for(char c= '1';c<='9';c++){

                        if(isValid(row,col,c,board)){

                            board[row][col] = c;
                            if(solve(board)) return true;
                            board[row][col] = '.'; 

                        }

                    }
                    return false;

                }

            }
        }
        return true;

    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};