class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int n2 = n/2;
        int diff = 0;
        for(int i = 0;i<n;i++){
            char c = num[i];
            bool isQuestion = (c=='?');
            bool isHalf = i<n2;
            
            int sign;
            if(isHalf) sign=1;
            else sign=-1;

            int d;
            if(isQuestion){
                d = 9;
            }else{
                d =2*(c-'0');
            }

            diff +=sign*d;

            
        }
        return diff;
    }
};