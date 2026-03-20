class Solution {
public:
    int vowelConsonantScore(string s) {
        int v= 0;
        int c = 0;
        for(auto ch:s){
            if((ch>='0' && ch<='9')|| ch==' '){
                continue;
            }
            if(ch=='a' || ch=='e' || ch=='o' || ch=='u' || ch=='i'){
                v++;
            }
            
            
            else{
                c++;
            }
        }

        int score = 0;
        if(c>0){
            score = v/c;
        }else{
            score = 0;
        }
        return score;

    }
};