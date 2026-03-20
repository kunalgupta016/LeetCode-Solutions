class Solution {
public:
    string reverseByType(string s) {
        vector<int> chaS;
        vector<int> numS;

        vector<int> chaN;
        vector<int> numN;

        
        for(int i = 0;i<s.size();i++){
            if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')'){

                chaS.push_back(s[i]);
                numS.push_back(i);
                
            }

            else{
                chaN.push_back(s[i]);
                numN.push_back(i);
            }

            
        }

        reverse(chaS.begin(),chaS.end());
        reverse(chaN.begin(),chaN.end());
        for(int i = 0;i<numS.size();i++){
            s[numS[i]] = chaS[i];
        }

        for(int i = 0;i<numN.size();i++){
            s[numN[i]] = chaN[i];
        }
        return s;
    }
};