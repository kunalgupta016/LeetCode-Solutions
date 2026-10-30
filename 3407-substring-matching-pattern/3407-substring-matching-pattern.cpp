class Solution {
public:
    bool hasMatch(string s, string p) {
        int index = p.find('*');
        string p1 = p.substr(0,index);
        string p2 = p.substr(index+1,p.size()-index-1);
        if(p1.size()+p2.size()==0) return true;
        index = 0;
        if(p1.size()){
            index = s.find(p1);
            if(index<0) return false;
        }


        if(p2.size()){
            index = s.find(p2,index+p1.size());
        }
        return (index>=0);
    }

};