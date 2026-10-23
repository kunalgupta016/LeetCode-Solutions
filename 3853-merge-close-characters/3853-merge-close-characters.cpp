class Solution {
public:
    string mergeCharacters(string s, int k) {
        
        unordered_map<char,int> mp;
        string str="";
        int index = 0;
        for(int i = 0;i<s.size();i++){

            char ch = s[i];
            if(mp.find(ch)!=mp.end()){

                int a = mp[ch];
                if((index-a)>k){
                    str+=ch;
                    mp[ch] = index;
                    index++;
                }
                

            }else{
                    str+=ch;
                    mp[ch]= index;
                    index++;
                }

        }
        return str;

    }
};