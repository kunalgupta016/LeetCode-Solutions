class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid]<=arr[e]){
                e = mid;
            }
            else {
                s = mid+1;
            }
        }
        return arr[s];
    }
};