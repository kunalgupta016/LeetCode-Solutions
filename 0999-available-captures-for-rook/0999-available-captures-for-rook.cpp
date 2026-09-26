class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        int iR = -1;
        int jR = -1;

        for(int i = 0;i<n;i++){

            for(int j = 0;j<m;j++){

                if(board[i][j]=='R'){

                   iR = i;
                   jR = j;
                   break; 

                }

            }

            if(iR!=-1 && jR!=-1)
            {
                break;
            }

        }
        int cnt = 0;
        for(int i = iR-1 ;i>=0;i--){

            if(board[i][jR]=='B'){
                break;
            }

            if(board[i][jR]=='p'){
                cnt++;
                break;
            }

        }

        for(int i = iR+1 ;i<n;i++){

            if(board[i][jR]=='B'){
                break;
            }

            if(board[i][jR]=='p'){
                cnt++;
                break;
            }

        }


        for(int j = jR - 1; j >= 0; j--) {

            if(board[iR][j] == 'B') {
                break;
            }

            if(board[iR][j] == 'p') {
                cnt++;
                break;
            }
        }

        for(int j = jR + 1; j <m; j++) {

            if(board[iR][j] == 'B') {
                break;
            }

            if(board[iR][j] == 'p') {
                cnt++;
                break;
            }
        }

        return cnt;

    }
};