class Solution {
public:
    vector<string> ans;

    void solve(int ind, string num, long long target,
               string path, long long curr, long long prev) {

        // Saare digits use ho gaye
        if (ind == num.size()) {
            if (curr == target) {
                ans.push_back(path);
            }
            return;
        }

        long long n = 0;

        // Next number banayenge
        for (int i = ind; i < num.size(); i++) {

            // Leading zero allowed nahi hai
            if (i > ind && num[ind] == '0')
                break;

            n = n * 10 + (num[i] - '0');

            string temp = num.substr(ind, i - ind + 1);

            // First number: koi operator nahi lagega
            if (ind == 0) {
                solve(i + 1, num, target, temp, n, n);
            }

            else {
                // Addition
                solve(i + 1, num, target,
                      path + "+" + temp, curr + n, n);

                // Subtraction
                solve(i + 1, num, target,
                      path + "-" + temp, curr - n, -n);

                // Multiplication
                solve(i + 1, num, target,
                      path + "*" + temp,
                      curr - prev + prev * n,
                      prev * n);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
        ans.clear();

        solve(0, num, target, "", 0, 0);

        return ans;
    }
};