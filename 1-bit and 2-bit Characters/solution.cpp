class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int n = bits.size();
        int a =0;
        int b =1;

        while(a<n && b<n){
            if(bits[a]==0){
                a++;
                b++;
            }
            else{
                a+=2;
                b+=2;
            }
        }

        if(a==n-1){
            return true;
        }else{
            return false;
        }
        


    }
};