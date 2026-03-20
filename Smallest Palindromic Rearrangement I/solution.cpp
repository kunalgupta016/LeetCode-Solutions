class Solution {
public:
    string smallestPalindrome(string s) {
        int n =s.size();
        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        string left="";
        string mid="";
        for(auto [c,freq]:mp){
            if(freq%2!=0) mid=c;
            left+=string(freq/2,c);
        }
       string right=left;
        reverse(right.begin(),right.end());
        return left+mid+right;
    }
};