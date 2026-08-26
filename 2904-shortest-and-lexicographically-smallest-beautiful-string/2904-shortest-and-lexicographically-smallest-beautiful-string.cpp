class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0, j = 0;
        int n = s.size();
        int cnt = 0;

        int mini = INT_MAX;
        string ans = "";

        while(j<n){
            if(s[j]=='1') cnt++;
            while(cnt==k){

                int len = j-i+1;
                string crr = s.substr(i,len);
                if(len<mini){
                    mini = len;
                    ans = crr;
                }

                else if(len==mini && crr<ans){
                    ans = crr;
                }

                if(s[i]=='1'){
                    cnt--;
                }
                i++;


            }
            j++;
        }

        return ans;

    }
};