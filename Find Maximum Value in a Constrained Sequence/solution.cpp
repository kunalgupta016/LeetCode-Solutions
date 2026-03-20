class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        vector<int> arr(n,1e9);
        for(auto i:restrictions){
            int indx = i[0];
            int maxval = i[1];
            arr[indx] = maxval;
        }

        for(int i=n-2;i>=0;i--){
            arr[i] = min(arr[i],arr[i+1]+diff[i]);
        }
        arr[0] = 0;
        int ans = 0;
        for(int i=1;i<n;i++){
            arr[i] = min(arr[i],arr[i-1]+diff[i-1]);
            ans = max(ans,arr[i]);
        }
        return ans;

    }
};