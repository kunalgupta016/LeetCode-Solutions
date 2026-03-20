class Solution {
public:
    int countEven(int num) {
        int cnt = 0;
        for(int i = 1;i<=num;i++){

            int sum = 0;
            int digit = i;
            while(digit>0){
                sum = sum + (digit%10);
                digit = digit/10;
            }
            if(sum%2==0){
                cnt++;
            }

        }
        return cnt;
    }
};