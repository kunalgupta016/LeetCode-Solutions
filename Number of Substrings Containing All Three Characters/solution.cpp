class Solution {
public:
    int numberOfSubstrings(string s) {

        int l = 0;

        int res = 0;
        int n = s.size();

        int a = 0;
        int b = 0;
        int c = 0;
        int cnt = 0;
        int r = l;
        while (r < n) {
            if (s[r] == 'a') {
                a++;
            } else if (s[r] == 'b') {
                b++;
            } else if (s[r] == 'c') {
                c++;
            }

            
            while(a>0 && b>0 && c>0){
                res+=(n-r);
                if(s[l]=='a')a--;
                else if(s[l]=='b') b--;
                else c--;
                l++;
            }

            r++;
        }

        return res;
    }
};