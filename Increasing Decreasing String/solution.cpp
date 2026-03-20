class Solution {
public:

    

    string sortString(string s) {
        vector<int> freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        string res = "";
        int n = s.size();
        while(res.size()<n){
            for(int i = 0;i<26;i++){
                if(freq[i]>0){
                   res.push_back(char('a' + i));
                   freq[i]--;
                }
            }

            for(int i = 25;i>=0;i-- ){
                if(freq[i]>0){
                   res.push_back(char('a' + i));
                   freq[i]--;
                }
            }
        }
        return res;
        

    }
};