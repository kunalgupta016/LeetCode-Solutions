class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n>0){
            int digit = n%10;
            arr.push_back(digit);
            n = n/10;
        }
        sort(arr.rbegin(),arr.rend());
        return arr[0]*arr[1];
    }
};