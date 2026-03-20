class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int> mp;
        for(auto c:s){
            mp[c]++;
        }
        vector<string> words = {
            "zero","one","two","three","four","five","six","seven","eight","nine"
        };
        vector<int> digit = {0,2,4,6,8,1,3,5,7,9};
        string ans="";
        for(int i = 0;i<digit.size();i++){
            int d = digit[i];
            while(true){
                vector<char> used;
                bool shihai = true;
                for(int j = 0;j<words[d].size();j++){
                    char ch = words[d][j];

                    if(mp[ch]>0){
                        mp[ch]--;
                        used.push_back(ch);
                    }
                    else{
                        shihai = false;
                        break;
                    }

                    
                }
                if(shihai){
                    ans+=char('0'+d);
                }else{
                    for(auto it:used){
                        mp[it]++;
                    }
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};