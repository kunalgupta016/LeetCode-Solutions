class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vowel;
        unordered_map<char,int> conso;

        string st = "aeiou";

        for(char c:s){
            if(st.find(c)!=string::npos){
                vowel[c]++;
            }else{
                conso[c]++;
            }

        }

        int maxiVo = 0;
        int maxiCo = 0;

        for(auto it:vowel){
            if(it.second>maxiVo){
                maxiVo = it.second;
            }
        }
        for(auto it:conso){
            if(it.second>maxiCo){
                maxiCo = it.second;
            }
        }

        return maxiVo+maxiCo;



    }
};