class Solution {
public:

    vector<string> res;

    void backtrack(string s , int i , int dots, string str){

        if(dots==4 && i==s.length()){
            res.push_back(str.substr(0,str.size()-1));
            return ;

        }


        if(dots>4) return ;

        for(int j = i;j<min(i+3,(int)s.size());j++){

            string sub = s.substr(i,j-i+1);

            if(stoi(sub)<256 && (i==j || s[i]!='0')){

                backtrack(s,j+1,dots+1,str+sub+".");

            } 

        }

    }


    vector<string> restoreIpAddresses(string s) {
        res.clear();
        
        if (s.length() > 12) {
            return res;
        }
        
        
        backtrack(s, 0, 0, "");
        return res;
    }
};