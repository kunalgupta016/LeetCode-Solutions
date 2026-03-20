class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0){
            return -1;
        }
        else{
            int  n = 1%k;
            int cnt = 1;
            while(n!=0){
                n = (n*10 + 1)%k;
                cnt++;
                if(cnt>k) return -1;
            }
            return cnt;
        }
    }
};