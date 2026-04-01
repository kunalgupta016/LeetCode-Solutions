class Solution {
public:
    bool isValid(string s) {
        while(true){
            if(s.find("abc")==string::npos) break;
            s.erase(s.find("abc"),3);
        }
        return s.empty();
    }
};