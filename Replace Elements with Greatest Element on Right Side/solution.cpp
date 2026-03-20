class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxSoFar = -1;   // last element becomes -1

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            arr[i] = maxSoFar;
            if (curr > maxSoFar) {
                maxSoFar = curr;
            }
        }
        return arr;
    }
};