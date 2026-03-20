class Solution {
public:
    bool checkString(string s) {
        int no_of_b = 0;
        for(auto ch:s){
            if(ch=='b') no_of_b++;
            else{
                if(no_of_b>0){
                    return false;
                }
            }
        }
        return true;
    }
};