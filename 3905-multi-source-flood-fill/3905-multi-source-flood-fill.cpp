class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {

        sort(sources.begin(), sources.end(),
             [](const vector<int>&a, const vector<int>&b) { return a[2] > b[2]; });

            vector<vector<int>>
                A(n, vector<int>(m, 0));

        for (const auto& s : sources) {
            A[s[0]][s[1]] = s[2];
        }

        vector<pair<int, int>> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    for (int i = 0; i < sources.size(); i++) {
        int s = sources[i][0];
        int e = sources[i][1];
        int v = sources[i][2];

        for (auto [dx, dy] : dir) {
            int x = s + dx;
            int y = e + dy;
            if (x >= 0 && x < n && y >= 0 && y < m && A[x][y] == 0) {
                A[x][y] = v;
                sources.push_back({x, y, v});
            }
        }
    }

    return A;
}
}
;