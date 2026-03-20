class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> rows(min(numRows, int(s.size())));
        int crr=0;
        bool goingDown = false;
        for(char c: s){

            rows[crr]+=c;
            if(crr==0||crr==numRows-1){
                goingDown = !goingDown;
            }
            if(goingDown){
                crr=crr+1;
            }else{
                crr=crr-1;
            }


        }
        string result;
        for(string row : rows) result += row;
    return result;
    }
};