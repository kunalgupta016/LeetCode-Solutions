class Solution {
public:
    
    
   int bfs(vector<vector<int>>& forest, int sr, int sc, int tr, int tc){
    int n = forest.size(), m = forest[0].size();
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> q;

    q.push({sr, sc});
    dist[sr][sc] = 0;

    int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

    while(!q.empty()){
        auto [r, c] = q.front();
        q.pop();

        if(r == tr && c == tc) return dist[r][c];

        for(auto &d : dirs){
            int nr = r + d[0];
            int nc = c + d[1];

            if(nr>=0 && nr<n && nc>=0 && nc<m &&
               forest[nr][nc] != 0 && dist[nr][nc] == -1){

                dist[nr][nc] = dist[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
    return -1;
}

    
    int cutOffTree(vector<vector<int>>& forest) {
         int n = forest.size(), m = forest[0].size();

        vector<vector<int>> trees;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(forest[i][j] > 1){
                    trees.push_back({forest[i][j], i, j});
                }
            }
        }

        sort(trees.begin(), trees.end());

        int sr = 0, sc = 0;
        int ans = 0;

        for(auto &t : trees){
            int tr = t[1], tc = t[2];
            int d = bfs(forest, sr, sc, tr, tc);

            if(d == -1) return -1;

            ans += d;
            sr = tr;
            sc = tc;
            forest[tr][tc] = 1; // cut tree
        }

        return ans;
    }
};