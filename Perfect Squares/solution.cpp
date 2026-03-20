class Solution {
public:

    bool perfect(int n ){
        long long  i = 1;
        long long j = n;
        while(i<=j){
            long long  mid = i+(j-i)/2;
            long long  val = mid*mid;
            if(val==n){
                return true;
            }
            else if(val>n){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return false;
    }


    int numSquares(int n) {
        if(perfect(n)) return 1;
        for(int i=1;i*i<=n;i++){
            if(perfect(n-i*i)) return 2;
        }

        int temp = n;
        while(temp%4==0){
            temp = temp/4;
        }
        if(temp%8==7){
            return 4;
        }
        return 3;


    }
};