class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int sum = 0;
        for(int i:nums){
            
            while(i>0){
                int di = i%10;
                if(di==digit) sum++;
                i = i/10;
            }
        }
        return sum;
    }
};