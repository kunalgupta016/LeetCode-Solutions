class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int x = 0.05*n;
        
        double sum = 0;

        for(int i = x;i<n-x;i++){
            sum += arr[i];
        }
        return sum/(n-2*x);
 

    }
};