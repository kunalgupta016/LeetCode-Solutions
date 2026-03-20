class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double low = 2e9;
        double high = 0;
        double totalArea = 0;

        for(auto &sq:squares){
            double y = sq[1];
            double l = sq[2];
            totalArea += l*l;
            low = min(low,y);
            high = max(high,y+l);
        }
        double targetArea = totalArea/2.0;
        for(int i = 0;i<=100;i++){

            double mid = low+(high-low)/2.0;
            double currentArea = 0;
            for(auto &a:squares){
                double y = a[1];
                double l = a[2];
                double h = max(0.0,min(l,mid-y));
                currentArea+=h*l;

            }
            if(currentArea<targetArea){
                low = mid;
            }else{
                high = mid;
            }



        }
        return high;
    }
};