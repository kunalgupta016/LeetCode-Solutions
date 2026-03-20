class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> digit;
        while(n>0){
            int num = n%10;
            digit.push_back(num);
            n = n/10;
        }
        reverse(digit.begin(),digit.end());
        int sum = 0;

        for(int i = 0;i<digit.size();i++){
            if(i&1){
                sum -=digit[i];
            }else{
                sum+=digit[i];
            }
        }
        
        return sum;
    }
};