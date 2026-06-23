class Solution {
public:
    int maxDistance(string moves) {
        int v = 0;
        int h = 0;
        int u = 0;
        for(char c:moves){

            if(c=='U'){
                v++;
            }
            else if(c=='D'){
                v--;
            }
            else if(c=='L'){
                h--;
            }else if(c=='R'){
                h++;
            }
            else{
                u++;   
            }

        }

        int total = abs(v)+abs(h)+u;
        return total;

    }
};