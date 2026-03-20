class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size()!=0 && s.find(part)<s.length()){
            int index = s.find(part);
            int len = part.length();
            s.erase(index,len);
        }
        return s;
    }
};