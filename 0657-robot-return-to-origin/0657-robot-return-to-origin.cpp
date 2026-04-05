class Solution {
public:
    bool judgeCircle(string moves) {

        int x = 0;
        int y = 0;
        for(char i:moves){
            if(i=='U'){
                x-=1;
            }
            else if(i=='D'){
                x+=1;
            }
            else if(i=='L'){
                y-=1;
            }else{
                y+=1;
            }
        }
    return (x==0 && y==0);

    }
};