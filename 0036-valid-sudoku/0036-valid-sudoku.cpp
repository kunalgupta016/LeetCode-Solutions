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

    // bool solve(vector<vector<char>>&board){

    //     for(int row = 0;row<9 ;row++){
    //         for(int col=0;col<9;col++){

    //             if(board[row][col]=='.'){

    //                 for(char c= '1';c<='9';c++){

    //                     if(isValid(row,col,c,board)){

    //                         board[row][col] = c;
    //                         if(solve(board)) return true;
    //                         board[row][col] = '.'; 

    //                     }

    //                 }
    //                 return false;

    //             }

    //         }
    //     }
    //     return true;

    // }


    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){

                if(board[i][j]=='.') continue;

                char ch = board[i][j];
                
                board[i][j] = '.';


                if(!isValid(i,j,ch,board)){
                    return false;
                }

                board[i][j] = ch;
            }
        }
        return true;
    }
};