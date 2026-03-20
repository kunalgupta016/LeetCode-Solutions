class Solution {
public:

    char squareIsWhite(string coordinates) {
        if(coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g'){
            if((coordinates[1]-'0')%2==0){
                return 'w';
            }else{
                return 'b';
            }
        }else{
            if((coordinates[1]-'0')%2==0){
                return 'b';
            }else{
                return 'w';
            }
        }
    }

    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return  ( squareIsWhite(coordinate1)==squareIsWhite(coordinate2));    
    }
};