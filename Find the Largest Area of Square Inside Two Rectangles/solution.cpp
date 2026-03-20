class Solution {
private:
    long long solve(int i , int j ,vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight){
        int first_minx = bottomLeft[i][0];
        int first_miny = bottomLeft[i][1];
        int first_maxx = topRight[i][0];
        int first_maxy = topRight[i][1];

        int second_minx = bottomLeft[j][0];
        int second_miny = bottomLeft[j][1];
        int second_maxx = topRight[j][0];
        int second_maxy = topRight[j][1];


        int w  = min(first_maxx,second_maxx) - max(first_minx,second_minx);
        int h = min(first_maxy,second_maxy) - max(first_miny,second_miny);
        if(w<=0 || h<=0) return 0;
        long long s = min(w,h);
        return (long long)(s*s);


    }
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long ans = 0;
        int n = bottomLeft.size();
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                long long res = solve(i,j,bottomLeft,topRight);
                ans = max(ans,res);
            }
        }
        return ans;

    }
};