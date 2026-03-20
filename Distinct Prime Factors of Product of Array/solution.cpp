class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> distinct;

        for (int n : nums) {
            
            while (n % 2 == 0) {
                distinct.insert(2);
                n /= 2;
            }

            for (int i = 3; i * i <= n; i += 2) {
                while (n % i == 0) {
                    distinct.insert(i);
                    n /= i;
                }
            }

            if (n > 2) {
                distinct.insert(n);
            }
        }

        return distinct.size();
    }
};
