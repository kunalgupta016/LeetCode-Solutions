class Solution {
public:

    bool isPrime(int n){
        if(n==1) return false;
        for(int i = 2;i*i<=n;i++){
            if(n%i==0) return false;
        } 
        return true;
    }

    

    int sumOfPrimesInRange(int n) {
        int temp = n;
        int num = 0;
        while(temp>0){
            num = num*10 + (temp%10);
            temp/=10;
        }
        int mini = min(num,n);
        int maxi = max(num,n);
        int sum = 0;

        for(int i = mini;i<=maxi;i++){
            if(isPrime(i)) {
                sum+=i;
            }
        }
        return sum;
    }
};