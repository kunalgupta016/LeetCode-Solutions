class Solution {
public:
    int passwordStrength(string password) {
        string s = "!@#$";
        string st = "abcdefghijklmnopqrstuvwxyz";
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string stri = "0123456789";
        int cnt = 0;
        set<char> sett;
        for(auto it:password){
            sett.insert(it);
        }
        for(auto it:sett){
            if(s.find(it)!=string::npos){
                cnt+=5;
            }
            else if(st.find(it)!=string::npos){
                cnt+=1;
            }
            else if(str.find(it)!=string::npos){
                cnt+=2;
            }
            else if(stri.find(it)!=string::npos){
                cnt+=3;
            }
        }
        return cnt;
    }
};