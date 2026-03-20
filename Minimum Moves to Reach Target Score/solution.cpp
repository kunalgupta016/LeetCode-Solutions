class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int cnt = 0;
        while(target>1&&maxDoubles>0){
            if(target&1){
                cnt++;
                target--;
            }
            else{
                
                    maxDoubles--;
                    cnt++;
                    target/=2;
                
            }

            
        }
        if(target>1) cnt+=(target-1);
        return cnt;
    }
};