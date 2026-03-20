class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2) return true;
        long long i = 2;
        long long  j = num/2;
        while(i<=j){
            long long mid = i+(j-i)/2;
            long long  val = mid*mid;
            if(val==num){
                return true;
            }
            else if(val<num){
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
        return false;
    }
};