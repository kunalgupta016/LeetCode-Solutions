class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, int> minX, maxX, minY, maxY;

        for (const auto& b : buildings) {
            int x = b[0], y = b[1];

            
            if (!minY.count(x)) {
                minY[x] = maxY[x] = y;
            } else {
                minY[x] = min(minY[x], y);
                maxY[x] = max(maxY[x], y);
            }

            if (!minX.count(y)) {
                minX[y] = maxX[y] = x;
            } else {
                minX[y] = min(minX[y], x);
                maxX[y] = max(maxX[y], x);
            }
        }

        int count = 0;
        for (const auto& b : buildings) {
            int x = b[0], y = b[1];
            // strictly boundary ke andar check karne ke liye
            if (minX[y] < x && x < maxX[y] && minY[x] < y && y < maxY[x]) {
                count++;
            }
        }

        return count;


    }
};