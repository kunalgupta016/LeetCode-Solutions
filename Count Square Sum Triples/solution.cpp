class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for(int i =n;i>0;i--){
            for(int j = 1;j<=n;j++){
                for(int k = 1;k<=n;k++){
                    if(k*k + j*j == i*i){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }

};