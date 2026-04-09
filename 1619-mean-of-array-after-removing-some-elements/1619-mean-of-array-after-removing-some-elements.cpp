class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int x = 0.05*n;
        double mean  = 0.00000;
        int sum = 0;

        for(int i = x;i<n-x;i++){
            sum += arr[i];
        }
        mean = (double)sum/(n-2*x);
        return mean;

    }
};