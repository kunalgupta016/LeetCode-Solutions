class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int mini = max((n-k),0);
        int maxi = n+k;
        int sum = 0;
        for(int i = mini;i<=maxi;i++){
            if((abs(n-i)<=k) && ((n&i)==0)  ){
                sum+=i;
            }
        }
        return sum;
    }
};