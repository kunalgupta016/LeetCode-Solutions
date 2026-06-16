class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(char c:s){
            if(c>='a' && c<='z'){
                result+=c;
            }
            else if(c=='*'){
                int n = result.size();
                string st = "";
                for(int i = 0;i<n-1;i++){
                    st+=result[i];
                }
                result = st;
            }
            else if(c=='#'){
                result = result+result;
            }
            else if(c=='%'){
                 reverse(result.begin(),result.end());
            }
        }
        return result;
    }
};