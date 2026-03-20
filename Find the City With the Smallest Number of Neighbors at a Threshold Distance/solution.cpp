class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> adjM(n, vector<int>(n, 1e9));
        for(auto it:edges){
            int u = it[0];
            int v = it[1];
            int w = it[2];
            adjM[u][v] = w;
            adjM[v][u] = w;
        }

        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i==j) adjM[i][j] = 0;
            }
        }

        for(int k=0;k<n;k++){
            for(int i =0;i<n;i++){
                for(int j=0;j<n;j++){
                    adjM[i][j] = min(adjM[i][j],adjM[i][k]+adjM[k][j]);
                }
            }
        }

        int city = -1;
        int minCnt = INT_MAX;

        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(adjM[i][j] <= distanceThreshold){
                    cnt++;
                }
            }

            
            if(cnt <= minCnt){
                minCnt = cnt;
                city = i;
            }
        }


        return city;

    }
};