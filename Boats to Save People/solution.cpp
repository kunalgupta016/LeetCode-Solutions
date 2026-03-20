class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int i = 0;
        int j = n-1;
        int cnt = 0;
        while(i<=j){
            if(arr[i]+arr[j]<=limit){
                i++;
            }
            j--;
            cnt++;
        }
        return cnt;

    }
};