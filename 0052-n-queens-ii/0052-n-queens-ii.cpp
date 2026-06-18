class Solution {
public:

    bool fill(int r , int c,vector<string>&board,int n){

        int dupRow = r;
        int dupCol = c;
        while(r>=0 && c>=0){

            if(board[r][c]=='Q') return false;
            r--;
            c--;

        }

        r = dupRow;
        c = dupCol;

        while(r>=0){

            if(board[r][c]=='Q') return false;
            r--;

        }

        r = dupRow;
        c = dupCol;

        while(c<n && r>=0){

            if(board[r][c] =='Q' ) return false;
            r--;
            c++;

        }
        return true;

    }

    void solve(int row , vector<string>&board,vector<vector<string>>&ans,int n){

        if(row==n){
            ans.push_back(board);
            return;
        }

        for(int col = 0;col<n;col++){

            if(fill(row,col,board,n)){

                board[row][col] = 'Q';
                solve(row+1,board,ans,n);
                board[row][col] = '.';
                
            }

        }

    }



    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i = 0;i<n;i++){
            board[i] = s;
        }
        solve(0,board,ans,n);
        return ans.size();
    }
};