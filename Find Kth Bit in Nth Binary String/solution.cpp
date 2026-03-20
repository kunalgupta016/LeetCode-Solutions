class Solution {
public:

    string invert(string s){
        for(int i = 0;i<s.size();i++){
            if(s[i]=='0'){
                s[i] = '1';
            }else{
                s[i] = '0';
            }
        }
        return s;
    }
    

    char findKthBit(int n, int k) {
        string s = "0";
        int cnt = 1;
        while(cnt<=n){
            string st = invert(s);
            reverse(st.begin(),st.end());
            s = s + '1' ;
            s = s+st;
            cnt++;
        }
        return s[k-1];

    }
};