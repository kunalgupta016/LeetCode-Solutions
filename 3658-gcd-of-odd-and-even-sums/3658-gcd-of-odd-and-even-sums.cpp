class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumo = 0;
        int sume = 0;
        for(int i = 1;i<=2*n;i++){
            if(i&1){
                sumo++;
            }else{
                sume++;
            }
        }
        return gcd(sumo,sume);
    }
};