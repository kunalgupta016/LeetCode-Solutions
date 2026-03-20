class Solution {
public:

    bool isPrime(int n){
        if(n==1){
            return false;
        }
        for(int i = 2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i = left ;i<=right;i++){
            
            int num = countSetBits(i);
            if(isPrime(num)) cnt++;
            
        }      
        return cnt;
    }
};