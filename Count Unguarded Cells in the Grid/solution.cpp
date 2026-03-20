class Solution {
public:

    void marking(int r , int c , vector<vector<int>> &arr ){
        int m = arr.size();
        int n = arr[0].size();
        for(int i = r+1;i<m;i++){
            if(arr[i][c]==2 || arr[i][c]==3) break;
            arr[i][c]=1;
        }
        for(int i = r-1;i>=0;i--){
            if(arr[i][c]==2 || arr[i][c]==3) break;
            arr[i][c]=1;
        }
        for(int i = c+1;i<n;i++){
            if(arr[r][i]==2 || arr[r][i]==3) break;
            arr[r][i]=1;
        }
        for(int i = c-1;i>=0;i--){
            if(arr[r][i]==2 || arr[r][i]==3) break;
            arr[r][i]=1;
        }
    }


    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) { 

        vector<vector<int>> arr(m, vector<int>(n,0));
        for(auto it:guards){
            int i = it[0];
            int j = it[1];
            arr[i][j] = 2;
        }
        for(auto it:walls){
            int i = it[0];
            int j = it[1];
            arr[i][j] = 3;
        }
        for(auto it:guards){
            int r = it[0];
            int c = it[1];
            marking(r,c,arr);

        }
        int cnt = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(arr[i][j]==0) cnt++;
            }
        }
        return cnt;
    }
};