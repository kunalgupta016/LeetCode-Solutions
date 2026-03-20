class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        int i = 0;
        while(n){
            if(n%2==1 && i%2==0){
                even++;
            }else if(n%2==1 && i%2==1){
                odd++;
            }
            n/=2;
            i++;
        }
        
        return {even,odd};
    }
};