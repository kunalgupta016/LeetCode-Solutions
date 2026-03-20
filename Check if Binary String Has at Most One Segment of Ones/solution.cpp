class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0;
        
        int n = s.size();

        int j = n-1;
    
        while(s[i]=='1')i++;
        if(i==n) return true;
        while(s[j]=='0')j--;
        return i>j;


        
    }
};