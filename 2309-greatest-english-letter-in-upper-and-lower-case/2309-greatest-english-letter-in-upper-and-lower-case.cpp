class Solution {
public:
    string greatestLetter(string s) {
       vector<int> lower(26,0),upper(26,0);
        for(char i:s){
            if(islower(i)){
                lower[i-'a']=1;
            }else{
                upper[i-'A'] =1;
            }

        } 
        int maxi = -1;
        for(int i = 0;i<26;i++){
            if(lower[i]&&upper[i]){
                maxi = max(maxi,i);
            }
        }
        if(maxi==-1) return "";
        char ans = maxi+'A';
        string res = "";
        res.push_back(ans);
        return res;       
    }
};