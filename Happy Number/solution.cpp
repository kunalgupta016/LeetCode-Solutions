class Solution {
    private:
        int next(int n ){
            int ans = 0;
            while(n>0){
                int digit = n%10;
                ans+=pow(digit,2);
                n = n/10;
            }
            return ans;
        }
public:
    bool isHappy(int n) {
        unordered_set<int> num;
        while(num.find(n)==num.end()){
            num.insert(n);
            n = next(n);
            if(n==1) return true;
            
        }
        return false;
    }



};