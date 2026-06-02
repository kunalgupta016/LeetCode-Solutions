class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;

        while (i < n && s[i] == ' ') i++;

        if (i == n) return 0;

        bool neg = false;

        if (s[i] == '-' || s[i] == '+') {
            if (s[i] == '-') neg = true;
            i++;
        }

        while (i < n && s[i] == '0') {
            i++;
        }

        long long num = 0;

        while (i < n) {
            if (s[i] >= '0' && s[i] <= '9') {
                int digit = s[i] - '0';

                num = num * 10 + digit;

                if (!neg && num > INT_MAX)
                    return INT_MAX;

                if (neg && num > (long long)INT_MAX + 1)
                    return INT_MIN;

                i++;
            }
            else {
                break;
            }
        }

        return neg ? -num : num;
    }
};