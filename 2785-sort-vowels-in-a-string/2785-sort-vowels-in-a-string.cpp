class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        string a = "aeiouAEIOU";
        for(char ch:s){
            
            if(a.find(ch)!=string::npos){
                v.push_back(ch);
            }
            
        }
        sort(v.begin(),v.end());
        int j = 0;
        for(int i = 0;i<s.size();i++){
            if(a.find(s[i])!=string::npos){
                s[i] = v[j];
                j++;
            }
        }

        return s;
    }
};