class Solution {
public:
    multiset<double> left, right;
    void balance() {
        if (left.size() > right.size() + 1) {
            right.insert(*left.rbegin());
            left.erase(prev(left.end()));
        } else if (left.size() < right.size()) {
            left.insert(*right.begin());
            right.erase(right.begin());
        }
    }

    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<double> arr;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            // insert karo
            if (left.empty() || x <= *left.rbegin()) {
                left.insert(x);
            } else {
                right.insert(x);
            }
            balance();
            // bada ho gya to
            if (i >= k) {
                int out = nums[i - k];
                if (left.find(out) != left.end()) {
                    left.erase(left.find(out));
                } else {
                    right.erase(right.find(out));
                }
                balance();
            }
            // medina nikalo
            if (i >= k - 1) {
                if (k % 2 == 1) {
                    arr.push_back(*left.rbegin());
                } else {
                    double ans = (((double)((*left.rbegin())+(double)(*right.begin()))/2.0));
                    arr.push_back(ans);
                }
            }
        }

        return arr;
    }
};