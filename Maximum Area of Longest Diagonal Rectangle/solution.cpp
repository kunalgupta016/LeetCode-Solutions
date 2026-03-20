class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int maxDiag = INT_MIN;
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int len = dimensions[i][0];
            int wid = dimensions[i][1];

            int diagSq = len * len + wid * wid;
            int area = len * wid;

            
            if (diagSq > maxDiag || (diagSq == maxDiag && area > maxArea)) {
                maxDiag = diagSq;
                maxArea = area;
            }
        }

        return maxArea;
    }
};
