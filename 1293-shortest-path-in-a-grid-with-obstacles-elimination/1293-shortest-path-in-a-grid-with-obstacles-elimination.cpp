class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        queue<tuple<int,int,int>>  q;
        vector<vector<int>> visited(n,vector<int>(m,-1));
        q.push({0,0,k});
        visited[0][0] = k;
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto[i,j,rem_k] = q.front();
                q.pop();
                if(i==n-1 && j==m-1){
                    return ans;
                }

                vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
                for(int h = 0;h<4;h++){
                    auto[di,dj] = dirs[h];
                    int new_i = i + di;
                    int new_j = j + dj;

                    if(new_i>=0 && new_j>=0 && new_i<n && new_j<m){
                        int new_k = rem_k - grid[new_i][new_j];
                        if(new_k>=0 && visited[new_i][new_j]<new_k){
                            visited[new_i][new_j] = new_k;
                            q.push({new_i,new_j,new_k});
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};