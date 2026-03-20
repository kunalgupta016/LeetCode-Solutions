class Solution {
public:
    int helper(int element, int val) {
        if (element < 0) {
            int a = 0;
            int ele = -element;
            if (ele % val != 0) {
                a = (ele / val) + 1;
            } else {
                a = ele / val;
            }

            element = element + a * val;
        }
        return element;
    }

    // Write C++ code here

    int findSmallestInteger(vector<int>& arr, int val) {
        int n = arr.size();

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {

            if (arr[i] < 0) {
                arr[i] = helper(arr[i], val);
            }
        }
        int minEle = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] % val;
            mp[arr[i]]++;
        }

        while (true) {
            int rem = minEle % val;
            if (mp[rem] > 0) {
                minEle++;
                mp[rem]--;
            } else {
                break;
            }
        }
        return minEle;
    }

    

};