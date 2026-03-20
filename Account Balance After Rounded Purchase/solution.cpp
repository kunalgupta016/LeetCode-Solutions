class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        if(purchaseAmount%10==0) return 100 - purchaseAmount ; 

        int rem = purchaseAmount % 10;

        if(rem>=5) return 100 - (purchaseAmount + (10-rem)) ; 
        return 100 - (purchaseAmount - rem) ; 
    }
};