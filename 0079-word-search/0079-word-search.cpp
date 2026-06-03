class Solution {
public:

    vector<int> dr = {1,0,-1,0};
    vector<int> dc = {0,1,0,-1};

    bool solve(vector<vector<char>>& board, string word,int k , int n,int m,int i ,int j){
        if(k==word.size()) return true;
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[k]) return false;
        char temp = board[i][j];
        board[i][j] = '\0';
        for(int r=0;r<4;r++){
            if(solve(board,word,k+1,n,m,i+dr[r],j+dc[r])) return true;
        }
        board[i][j] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(solve(board,word,0,n,m,i,j)) return true;
            }
        }
        return false;
    }
};