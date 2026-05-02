class Solution {
public:

    int reverse(int n){
        int num = 0;
        while(n>0){
            num = num * 10 + (n%10);
            n = n/10;
        }
        return num;
    }

    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i = 1;i<=n;i++){
            int digit = i;
            int how=0;
            long long num = 0;
            if(i==3 || i==4 || i==7) continue;
            string a = "";
            while(digit>0){
                int lastDigit = digit%10;
                
                if(lastDigit==3 || lastDigit==4 || lastDigit==7){
                    how = -1;
                    break;
                }else{
                    if(lastDigit == 2) {
                        num = 5+num*10;
                        how = 1;
                    }else if(lastDigit == 5){
                        num = 2+num*10;
                        how = 1;
                    }
                    else if(lastDigit == 6){
                        num =9+ num*10;
                        how = 1;
                    }else if(lastDigit == 9){
                        num = 6+num*10;
                        how = 1;
                    }
                    else
                    {
                        num = lastDigit+num*10;
                    }
                }
                digit/=10;
            }
            num = reverse(num);
            cout<<"i = "<<i<<"num= "<<num<<endl;

            if(how == 1){
                cnt++;
            }
            num = 0;
        }
        return cnt;
    }
};