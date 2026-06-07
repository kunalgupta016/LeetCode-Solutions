class Solution {
public:

    int digit(long long num) {
    if (num == 0) return 1;
        return log10(abs(num)) + 1;
    }

    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i:nums){
            if(digit(i)%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};