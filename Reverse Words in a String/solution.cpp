class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        int n = s.size();
        int i = n-1;
        while(i>=0){
            while(i>=0 &&s[i]==' ' ){
                i--;
            }
            temp = "";

            while(i>=0 && s[i]!=' '){
                temp+=s[i];
                i--;
            }
            

            if(!temp.empty()){
                reverse(temp.begin() , temp.end());
                if(!ans.empty()){
                    
                    ans+=' ';
                }
                
                
                    ans = ans+ temp;
                
            }

        }
        return ans;
    }
};