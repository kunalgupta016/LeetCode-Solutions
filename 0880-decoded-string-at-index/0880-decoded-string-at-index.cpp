class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size = 0;
        for(char c:s){
            if(isdigit(c)){
                size = size*(c-'0');
            }
            else{
                size++;
            }
        }

        for(int i = s.size()-1;i>=0;i--){
            if(isdigit(s[i])){
                size = size/(s[i]-'0');
                k = k%size;
            }
            else{
                if(k==0 || k==size){
                    string res(1,s[i]);
                    return res;
                }
                size--;
            }
        }

        return " ";
    }
};